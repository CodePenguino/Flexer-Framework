#pragma once

#include "comp_data.h"
#include <string>

SpriteComponent spriteComponent_init(const std::string& texturePath);
SpriteComponent spriteComponent_initBackground(const std::string& texturePath);
void spriteComponent_draw(SpriteComponent& self);
void spriteComponent_destroy(SpriteComponent& self);

constexpr const static GLuint sprite_default_indices[6] =
{
	0, 1, 3,
	1, 2, 3
};
