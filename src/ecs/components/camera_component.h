#pragma once

#include "comp_data.h"
// #include "../../core/v2.h"

void camera2dComponent_init(Camera2dComponent& camera, const v2& pos, float rot);
constexpr void camera2dComponent_setViewMat(Camera2dComponent& camera);
m4 camera2dComponent_getViewProj(Camera2dComponent& camera);
void camera2dComponent_updateProjection(Camera2dComponent& camera);

v2 v2_screenToViewSpace(v2& vector, Camera2dComponent& camera);