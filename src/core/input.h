#pragma once

#include <glm/glm.hpp>
#include "../common/util.h"

#define MAX_KEYS	512
#define MAX_MOUSEBUTTONS 8
#define MAX_BUTTONS 64
#define MIN_ANALOG_VALUE 0.1

static int inputControllerAxisCount;
static int inputControllerButtonCount;

namespace Input
{
	extern bool keys[MAX_KEYS];
	extern bool mouseButtons[MAX_MOUSEBUTTONS];
	extern glm::vec2 mousePosition;
	extern glm::vec2 mouseDelta;

	extern int inputControllerUsed;
	extern const float* inputControllerAxes;
	extern const unsigned char* inputControllerButtons;
	extern bool isUsingController;

	bool useController(u8 joystickNum);
	bool keyPressed(int keyCode);
	bool mouseButtonPressed(int button);
	bool controllerButtonPressed(u16 buttonID);
	bool controllerAxisMotion(u8 axis);
};
