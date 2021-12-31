#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "../common/util.h"
#include "../core/input.h"
#include "../ecs/components/sprite_component.h"
#include "shader.h"

struct Window
{
	GLFWwindow* handle;
	u16 width, height;
    float aspectRatio;
    SpriteComponent backgroundImage;
    bool hasBackgroundImage;
}; extern Window window;

static Shader backgroundShader;

void window_center(GLFWwindow* window);
void window_create(u16 width, u16 height, const char* title);
void window_setFunctions(void (*procInputs)(void), void (*upd)(void));

void window_mainloop();
void window_close();
void window_destroy();

void window_setBackgroundColorRGBA(float r, float g, float b, float a);
void window_setBackgroundColorRGB(float r, float g, float b);
void window_setBackgroundImage(const std::string& filePath);

static void (*processInputsCallback)(void);
static void (*updateCallback)(void);