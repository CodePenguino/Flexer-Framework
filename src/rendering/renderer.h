#pragma once

#include "shader.h"
#include "../ecs/types/sprite.h"

extern float sprite_resolution;

static Shader render_shader;
extern Camera2dComponent camera;

// Set up the renderer "resolution"
void render_setup(float spriteRes);

// Use a shader and bind it
void render_useShader(Shader shader);

// TODO: Implement this function
void render_drawSprite(SpriteEntity& sprite);

// TODO: Implement this function
void render_updateCamProjection();