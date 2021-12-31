#pragma once

#include "v2.h"

#define MAX_KEYS	512
#define MAX_MOUSEBUTTONS 8
#define MAX_BUTTONS 64

extern bool keys[MAX_KEYS];
extern bool mouseButtons[MAX_MOUSEBUTTONS];
extern v2 mousePosition;
extern v2 mouseDelta;

extern int inputControllerUsed;
extern const float* inputControllerAxes;
static int inputControllerAxisCount;

static int inputControllerButtonCount;
extern const unsigned char* inputControllerButtons;
extern bool isUsingController;

bool useController(u8 joystickNum);
bool isKeyPressed(int keyCode);
bool isMouseButtonPressed(int button);
bool isButtonPressed(u16 buttonID);