#pragma once

#include "comp_data.h"
#include "camera_component.h"

Transform2dComponent transform2dComponent_init();

glm::mat4 transform2dComponent_getModelMat(Transform2dComponent& transform);
glm::mat4 transform2dComponent_getOrtho(Camera2dComponent& camera, Transform2dComponent& transform);
float transform2dComponent_rotateToPoint(const glm::vec2& point);
