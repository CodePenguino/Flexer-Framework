#include "window.h"
#include <GLFW/glfw3.h>
#include <iostream>
#include <stdlib.h>
#include "../core/time.h"
#include "renderer.h"

Window window;

// Callbackers!
static void resize_callback(GLFWwindow* winHandle, int width, int height)
{
	glViewport(0, 0, width, height);
	
	window.width = width;
	window.height = height;
	window.aspectRatio = (float)width/height;
	
	if(height < 1)
		window.aspectRatio = 0;
	
	render_updateCamProjection();
}

static void key_callback(GLFWwindow* winHandle, int key, int scancode, int action, int mods)
{
	if(key < 0)
	{
		return;
	}
	
	switch(action)
	{
	case GLFW_PRESS:
		Input::keys[key] = true;
		break;
		
	case GLFW_RELEASE:
		Input::keys[key] = false;
		break;
		
	default:
		break;
	}
}

static void mouse_callback(GLFWwindow* winHandle, int button, int action, int mods)
{
	if(button < 0)
	{
		return;
	}
	
	switch(action)
	{
	case GLFW_PRESS:
		Input::mouseButtons[button] = true;
		break;
		
	case GLFW_RELEASE:
		Input::mouseButtons[button] = false;
		break;
		
	default:
		break;
	}
}

static void cursor_position_callback(GLFWwindow* winHandle, double xpos, double ypos)
{
	glm::vec2 p = glm::vec2(xpos, ypos);
	
	Input::mouseDelta = p - Input::mousePosition;
	Input::mousePosition = p;
}

void window_create(u16 width, u16 height, const char* title, bool fullscreen)
{
	window.width       = width;
	window.height      = height;
	window.aspectRatio = (float)width/height;
	
	if(!glfwInit())
	{
		std::cerr << "Error: GLFW failed to initialize!\n";
		exit(1);
	}
	
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);
	
	window.handle = glfwCreateWindow(window.width, window.height, title, fullscreen ? glfwGetPrimaryMonitor() : NULL, NULL);
	if(!window.handle)
	{
		std::cerr << "Error: GLFW failed to create a valid window!\n";
		glfwTerminate();
		exit(1);
	}
	
	glfwMakeContextCurrent(window.handle);
	
	// Callback setups
	window_center(window.handle);

	if(glewInit() != GLEW_OK)
	{
		std::cerr << "Error: GLEW failed to initialize!\n";
		glfwDestroyWindow(window.handle);
		glfwTerminate();
		exit(1);
	}
	
	glfwSetFramebufferSizeCallback(window.handle, resize_callback);
	glfwSetKeyCallback(window.handle, key_callback);
	glfwSetMouseButtonCallback(window.handle, mouse_callback);
	glfwSetCursorPosCallback(window.handle, cursor_position_callback);
	
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	
	backgroundShader = shader_create("../res/shaders/background");
	
	Time::init(240.0f);
}

void window_setFunctions(void (*procInputs)(void), void (*upd)(void))
{
	processInputsCallback = procInputs;
	updateCallback = upd;
}

void window_mainloop()
{
	// Error check. If we don't exit, we might get some "segmentation fault" errors on Linux
	if(!processInputsCallback)
	{
		std::cerr << "Error: Process inputs function is invalid!\n";
		exit(1);
	}
	
	if(!updateCallback)
	{
		std::cerr << "Error: Update function is invalid!\n";
		exit(1);
	}
	
	while(!glfwWindowShouldClose(window.handle))
	{
		processInputsCallback();
		
		glClear(GL_COLOR_BUFFER_BIT);
		
		if(window.hasBackgroundImage)
		{
			shader_use(backgroundShader);
			shader_set_float(backgroundShader, "windowAspectRatio", window.aspectRatio);
			spriteComponent_draw(window.backgroundImage);
		}
		
		updateCallback();
		
		glfwSwapBuffers(window.handle);
		glfwPollEvents();
		Time::update();
		Input::mouseDelta = glm::vec2(0,0);
	}
}

void window_close()
{
	glfwSetWindowShouldClose(window.handle, GL_TRUE);
}

void window_destroy()
{
	shader_destroy(backgroundShader);
	glfwDestroyWindow(window.handle);
	glfwTerminate();
}

void window_setBackgroundColorRGBA(float r, float g, float b, float a)
{
	glClearColor(r,g,b,a);
}

// Too lazy to put a 1.0f as the alpha value? Introducing this function, which does that for you!
void window_setBackgroundColorRGB(float r, float g, float b)
{
	glClearColor(r,g,b,1.0f);
}

void window_setBackgroundImage(const std::string& filePath)
{
	window.hasBackgroundImage = true;
	window.backgroundImage = spriteComponent_initBackground(filePath);
}

// The code for this is copied from this github link: https://github.com/glfw/glfw/issues/310
void window_center(GLFWwindow* window)
{
	int window_x, window_y;
	glfwGetWindowPos(window, &window_x, &window_y);
	
	int window_width, window_height;
	glfwGetWindowSize(window, &window_width, &window_height);
	
	// Halve the window size and use it to adjust the window position to the center of the window
	window_width *= 0.5;
	window_height *= 0.5;
	
	window_x += window_width;
	window_y += window_height;
	
	// Get the list of monitors
	int monitors_length;
	GLFWmonitor **monitors = glfwGetMonitors(&monitors_length);
	
	if(monitors == NULL) {
		// Got no monitors back
		return;
	}
	
	// Figure out which monitor the window is in
	GLFWmonitor *owner = NULL;
	int owner_x, owner_y, owner_width, owner_height;
	
	for(int i = 0; i < monitors_length; i++) {
		// Get the monitor position
		int monitor_x, monitor_y;
		glfwGetMonitorPos(monitors[i], &monitor_x, &monitor_y);
		
		// Get the monitor size from its video mode
		int monitor_width, monitor_height;
		GLFWvidmode *monitor_vidmode = (GLFWvidmode*) glfwGetVideoMode(monitors[i]);
		
		if(monitor_vidmode == NULL) {
			// Video mode is required for width and height, so skip this monitor
			continue;
			
		} else {
			monitor_width = monitor_vidmode->width;
			monitor_height = monitor_vidmode->height;
		}
		
		// Set the owner to this monitor if the center of the window is within its bounding box
		if((window_x > monitor_x && window_x < (monitor_x + monitor_width)) && (window_y > monitor_y && window_y < (monitor_y + monitor_height))) {
			owner = monitors[i];
			
			owner_x = monitor_x;
			owner_y = monitor_y;
			
			owner_width = monitor_width;
			owner_height = monitor_height;
		}
	}
	
	if(owner != NULL) {
		// Set the window position to the center of the owner monitor
		glfwSetWindowPos(window, owner_x + (owner_width * 0.5) - window_width, owner_y + (owner_height * 0.5) - window_height);
	}
}
