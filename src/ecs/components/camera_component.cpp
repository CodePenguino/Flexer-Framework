#include "camera_component.h"
#include "../../rendering/window.h"
#include <iostream>

void camera2dComponent_init(Camera2dComponent& camera, const v2& pos, float rot)
{
    camera.transform.position = pos;
    camera.transform.rotation = rot;
    camera.transform.scale    = v2(1.0f, 1.0f);
    
    camera.projMat = m4_ortho(-window.aspectRatio, window.aspectRatio, -1.0f, 1.0f, -1.0f, 1.0f);
    camera.viewMat.initIdentity();
}

constexpr void camera2dComponent_setViewMat(Camera2dComponent& camera)
{
    // camera.projMat = m4_ortho(-window.aspectRatio, window.aspectRatio, -1.0f, 1.0f, -1.0f, 1.0f);
    m4 pos = m4_translate(-camera.transform.position.x, -camera.transform.position.y, 0.0f);
    m4 rot = m4_rotate2d(camera.transform.rotation);
    
    camera.viewMat = rot * pos;
}

m4 camera2dComponent_getViewProj(Camera2dComponent& camera)
{
    camera2dComponent_setViewMat(camera);
    
    return camera.projMat * camera.viewMat;
}

void camera2dComponent_updateProjection(Camera2dComponent& camera)
{
    camera.projMat = m4_ortho(-window.aspectRatio, window.aspectRatio, -1.0f, 1.0f, -1.0f, 1.0f);
}

// TODO: Screen to view coordinate functions
v2 v2_screenToViewSpace(v2& vector, Camera2dComponent& camera)
{
    float x = 2.0f * vector.x / window.width  - 1;
    float y = 2.0f * vector.y / window.height - 1;
    
    v4 screenPos = v4(x, y, -1.0f, 1.0f);
    
    m4 viewProj = camera.viewMat * camera.projMat;
    v4 viewPos  = v4_mul_m4(screenPos, m4_inverse(viewProj));
    
    return v2((-viewPos.x * window.aspectRatio) + camera.transform.position.x,
              ( viewPos.y * window.aspectRatio) + camera.transform.position.y);
}