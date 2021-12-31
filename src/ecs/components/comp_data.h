#pragma once

#include <GL/glew.h>
#include "../../core/v2.h"
#include "../../core/quat.h"
#include "../../core/m4.h"

struct SpriteComponent
{
	GLuint vao;
	GLuint vbo;
	GLuint ebo;
	GLuint texture_id;
};

struct Transform2dComponent
{
	v2 position;
	f32 rotation;
	v2 scale;
};

struct Transform3dComponent
{
	v3 position;
	quat rotation;
	v3 scale;
};

struct Camera2dComponent
{
    m4 projMat, viewMat;
    Transform2dComponent transform;
};