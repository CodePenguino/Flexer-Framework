#pragma once

#include "../rendering/window.h"
#include "../rendering/shader.h"
#include "../rendering/sprite_temp.h"
#include "../rendering/renderer.h"
#include "../ecs/types/sprite.h"
#include "../ecs/components/transform_component.h"
#include "../core/time.h"
#include "../core/math.h"

void startGame();
void loopGame();
void stopGame();

static Shader spriteShader;
static SpriteEntity ent;
static SpriteEntity ent2;
static SpriteEntity analogEntity;