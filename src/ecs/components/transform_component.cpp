#include "transform_component.h"
#include <glm/gtx/transform.hpp>
#include "../../common/util.h"

/* FIXME: THIS IS VERY DUMB, BUT I'M USING glm::mat4s instead of glm::mat3s. WHY???????????? */

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

glm::mat4 transform2dComponent_getModelMat(Transform2dComponent& transform)
{
	glm::mat4 modelMat = glm::mat4(1.0f);
   
	glm::mat4 posMatrix = glm::translate(glm::vec3(transform.position.x, transform.position.y, 1.0f));
	glm::mat4 rotMatrix = glm::rotate(glm::radians(transform.rotation), glm::vec3(0, 0, 1));
	glm::mat4 sclMatrix = glm::scale(glm::vec3(transform.scale.x, transform.scale.y, 1.0f));

    modelMat = posMatrix * rotMatrix * sclMatrix;
    
    return modelMat;
}

glm::mat4 transform2dComponent_getOrtho(Camera2dComponent& camera, Transform2dComponent& transform)
{
    return camera2dComponent_getViewProj(camera) * transform2dComponent_getModelMat(transform);
}

float transform2dComponent_rotateToPoint(const glm::vec2& point)
{
    return glm::degrees(atan2f(point.y, point.x));
}
