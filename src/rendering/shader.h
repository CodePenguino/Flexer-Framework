#pragma once

#include <GL/glew.h>
#include <string>
#include <glm/glm.hpp>

typedef GLuint Shader;

Shader shader_create(const std::string& fileName);
void shader_destroy(Shader self);
void shader_use(Shader self);

void shader_set_bool(Shader shader, const char* name, bool value);
void shader_set_int(Shader shader, const char* name, int value);
void shader_set_float(Shader shader, const char* name, float value);
void shader_set_float(GLint ID, float value);

void shader_set_vec2(Shader shader, const char* name, const glm::vec2& value);
void shader_set_vec3(Shader shader, const char* name, const glm::vec3& value);
void shader_set_vec4(Shader shader, const char* name, const glm::vec4& value);
void shader_set_mat4(Shader shader, const char* name, const glm::mat4& mat);
