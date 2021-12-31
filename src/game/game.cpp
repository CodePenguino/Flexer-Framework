#include "game.h"
#include <iostream>

#define MIN_ANALOG_VALUE 0.05

static void processInputs()
{
    useController(GLFW_JOYSTICK_1);
    
    if(isKeyPressed(GLFW_KEY_W))
    {
        camera.transform.position.y += Time::delta;
    }
    
    if(isKeyPressed(GLFW_KEY_S))
    {
        camera.transform.position.y -= Time::delta;
    }
    
    if(isKeyPressed(GLFW_KEY_D))
    {
        camera.transform.position.x += Time::delta;
    }
    
    if(isKeyPressed(GLFW_KEY_A))
    {
        camera.transform.position.x -= Time::delta;
    }
    
    if(isUsingController)
    {
        if(inputControllerAxes[0] > MIN_ANALOG_VALUE || inputControllerAxes[0] < -MIN_ANALOG_VALUE)
        {
            camera.transform.position.x += inputControllerAxes[0] * Time::delta;
        }
        
        if(inputControllerAxes[1] > MIN_ANALOG_VALUE || inputControllerAxes[1] < -MIN_ANALOG_VALUE)
        {
            camera.transform.position.y -= inputControllerAxes[1] * Time::delta;
        }
        
        if(inputControllerAxes[2] > MIN_ANALOG_VALUE || inputControllerAxes[2] < -MIN_ANALOG_VALUE)
        {
            ent.transform.rotation = inputControllerAxes[2] * 90.0f;
        }
        else
        {
            ent.transform.rotation = 0.0f;
        }
    }
    
    std::cerr << Time::delta << std::endl;
}

static void update()
{
    render_useShader(spriteShader);
	
    if(!isUsingController)
    {
        ent.transform.rotation = transform2dComponent_rotateToPoint(v2_screenToViewSpace(mousePosition, camera));
    }
    else
    {
        // Set the red indicator's position relative to the right analog stick rotation.
        analogEntity.transform.position = v2(inputControllerAxes[2] * 0.3f, -inputControllerAxes[3] * 0.3f);
        ent.transform.rotation = transform2dComponent_rotateToPoint(analogEntity.transform.position);
        render_drawSprite(analogEntity);
    }
    
    ent2.transform.position = v2(sinf(Time::globalTimer), cosf(Time::globalTimer));
    
    render_drawSprite(ent2);
    render_drawSprite(ent);
}

void startGame()
{
	window_create(1024, 768, "It's a window!");
	window_setFunctions(processInputs, update);
    window_setBackgroundImage("../res/images/clouds.png");
    
    render_setup(360);
    
    ecs_init(3, sizeof(SpriteComponent), sizeof(Transform2dComponent), sizeof(Transform3dComponent), sizeof(Camera2dComponent));
    
	spriteShader = shader_create("../res/shaders/sprite");
    
	ent.init("../res/images/Cross.png");
    ent2.init("../res/images/Placeholder.png");
    analogEntity.init("../res/images/AnalogCross.png");
    
	loopGame();
	stopGame();
}

void stopGame()
{
	ent.destroy();
    ent2.destroy();
    analogEntity.destroy();
    
    ecs_free();
    
    shader_destroy(spriteShader);
    window_destroy();
}

void loopGame()
{
	window_mainloop();
}