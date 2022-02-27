#pragma once

#include "comp_data.h"
// #include "../../core/v2.h"

void camera2dComponent_init(Camera2dComponent& camera, const glm::vec2& pos, float rot);
void camera2dComponent_setViewMat(Camera2dComponent& camera);
glm::mat4 camera2dComponent_getViewProj(Camera2dComponent& camera);
void camera2dComponent_updateProjection(Camera2dComponent& camera);

glm::vec2 screenToViewSpace(glm::vec2& vector, Camera2dComponent& camera);
