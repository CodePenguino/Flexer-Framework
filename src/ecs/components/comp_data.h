#pragma once

#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtx/quaternion.hpp>

struct SpriteComponent
{
	GLuint vao;
	GLuint vbo;
	GLuint ebo;
	GLuint texture_id;
};

struct Transform2dComponent
{
	glm::vec2 position;
	float rotation;
	glm::vec2 scale;
};

struct Transform3dComponent
{
	glm::vec3 position;
	glm::quat rotation;
	glm::vec3 scale;
};

struct Camera2dComponent
{
	glm::mat4 projMat, viewMat;
    Transform2dComponent transform;
};
