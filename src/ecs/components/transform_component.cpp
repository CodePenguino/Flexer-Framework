#include "transform_component.h"

Transform2dComponent transform2dComponent_init()
{
    Transform2dComponent trans;
    
    trans.position.x = 0.0f;
    trans.position.y = 0.0f;
    trans.rotation   = 0.0f;
    trans.scale.x    = 1.0f;
    trans.scale.y    = 1.0f;
    
    return trans;
}

m4 transform2dComponent_getModelMat(Transform2dComponent& transform)
{
    m4 modelMat;
    modelMat.initIdentity();
    
    m4 posMatrix = m4_translate(transform.position.x, transform.position.y, 1.0f);
    m4 rotMatrix = m4_rotate2d(transform.rotation);
    m4 sclMatrix = m4_scale(transform.scale.x, transform.scale.y, 1.0f);
    
    modelMat = posMatrix * rotMatrix * sclMatrix;
    
    return modelMat;
}

m4 transform2dComponent_getOrtho(Camera2dComponent& camera, Transform2dComponent& transform)
{
    return camera2dComponent_getViewProj(camera) * transform2dComponent_getModelMat(transform);
}

float transform2dComponent_rotateToPoint(const v2& point)
{
    return radians_to_degrees(atan2f(point.y, point.x));
}