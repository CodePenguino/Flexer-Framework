#include "input.h"
#include <iostream>
#include <GLFW/glfw3.h>

namespace Input
{

bool keys[MAX_KEYS];
bool mouseButtons[MAX_MOUSEBUTTONS];
glm::vec2 mousePosition;
glm::vec2 mouseDelta;

int inputControllerUsed;
const float* inputControllerAxes;
const unsigned char* inputControllerButtons;
bool isUsingController;

bool useController(u8 joystickNum)
{
    inputControllerUsed = glfwJoystickPresent(joystickNum);
    
    if(!inputControllerUsed)
    {
        isUsingController = false;
        return false;
    }
    
    inputControllerAxes = glfwGetJoystickAxes(joystickNum, &inputControllerAxisCount);
    inputControllerButtons = glfwGetJoystickButtons(joystickNum, &inputControllerButtonCount);
    
    isUsingController = true;
    
    return true;
}

bool keyPressed(int keyCode)
{
    if(keyCode > MAX_KEYS)
    {
        std::cerr << "Keyboard error: keyCode is " << keyCode << ", which is higher than maximum! Increase MAX_KEYS maybe?\n";
    }
    
    if(keys[keyCode])
    {
        return true;
    }
    
    return false;
}

bool mouseButtonPressed(int button)
{
    if(button > MAX_MOUSEBUTTONS)
    {
        std::cerr << "Mouse input error: button is " << button << ", which is higher than maximum! Increase MAX_MOUSEBUTTONS maybe?\n";
    }
    
    if(mouseButtons[button])
    {
        return true;
    }
    
    return false;
}

bool controllerAxisMotion(u8 axis)
{
    if(inputControllerAxes[axis] > MIN_ANALOG_VALUE || inputControllerAxes[axis] < -MIN_ANALOG_VALUE)
    {
        return true;
    }
    
    return false;
}

bool controllerButtonPressed(u16 buttonID)
{
    if(buttonID > MAX_BUTTONS)
    {
        std::cerr << "Controller input error: button is " << buttonID << ", which is higher than maximum! Increase MAX_BUTTONS maybe?\n";
    }
    
    if(inputControllerButtons[buttonID])
    {
        return true;
    }
    
    return false;
}

};
