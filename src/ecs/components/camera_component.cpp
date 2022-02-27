#include "camera_component.h"
#include "../../rendering/window.h"
#include <iostream>
#include <glm/gtx/transform.hpp>

void camera2dComponent_init(Camera2dComponent& camera, const glm::vec2& pos, float rot)
{
    camera.transform.position = pos;
    camera.transform.rotation = rot;
    camera.transform.scale    = glm::vec2(1.0f, 1.0f);
    
    camera.projMat = glm::ortho(-window.aspectRatio, window.aspectRatio, -1.0f, 1.0f, -1.0f, 1.0f);
    camera.viewMat = glm::mat4(1.0f);
}

void camera2dComponent_setViewMat(Camera2dComponent& camera)
{
    // camera.projMat = m4_ortho(-window.aspectRatio, window.aspectRatio, -1.0f, 1.0f, -1.0f, 1.0f);
	//glm::mat4 pos = m4_translate(-camera.transform.position.x, -camera.transform.position.y, 0.0f);
	//glm::mat4 rot = m4_rotate2d(camera.transform.rotation);
    glm::mat4 pos = glm::translate(glm::vec3(-camera.transform.position.x, -camera.transform.position.y, 0.0f));
	// NOTE: This might be a radian value, which requires a conversion. Idk
	glm::mat4 rot = glm::rotate(camera.transform.rotation, glm::vec3(0, 0, 1));

    camera.viewMat = rot * pos;
}

glm::mat4 camera2dComponent_getViewProj(Camera2dComponent& camera)
{
    camera2dComponent_setViewMat(camera);
    
    return camera.projMat * camera.viewMat;
}

void camera2dComponent_updateProjection(Camera2dComponent& camera)
{
    camera.projMat = glm::ortho(-window.aspectRatio, window.aspectRatio, -1.0f, 1.0f, -1.0f, 1.0f);
}

glm::vec2 screenToViewSpace(glm::vec2& vector, Camera2dComponent& camera)
{
    float x = 2.0f * vector.x / window.width  - 1;
    float y = 2.0f * vector.y / window.height - 1;
    
	glm::vec4 screenPos = glm::vec4(x, y, -1.0f, 1.0f);
    
	glm::mat4 viewProj = camera.viewMat * camera.projMat;
	//glm::vec4 viewPos  = v4_mul_m4(screenPos, m4_inverse(viewProj));
	// NOTE: This might need to be swapped out.
    glm::vec4 viewPos = screenPos * glm::inverse(viewProj);

    return glm::vec2(( viewPos.x/* * window.aspectRatio*/) + camera.transform.position.x,
	                 (-viewPos.y/* * window.aspectRatio*/) + camera.transform.position.y);
}
