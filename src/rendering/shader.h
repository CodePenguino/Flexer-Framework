#pragma once

#include <GL/glew.h>
#include "../core/math.h"

typedef GLuint Shader;

Shader shader_create(const std::string& fileName);
void shader_destroy(Shader self);
void shader_use(Shader self);

void shader_set_bool(Shader shader, const char* name, bool value);
void shader_set_int(Shader shader, const char* name, int value);
void shader_set_float(Shader shader, const char* name, float value);
void shader_set_float_with_location(GLint ID, float value);

void shader_set_v2(Shader shader, const char* name, const v2& value);
void shader_set_v3(Shader shader, const char* name, const v3& value);
void shader_set_v4(Shader shader, const char* name, const v4& value);
void shader_set_m4(Shader shader, const char* name, const m4& mat);