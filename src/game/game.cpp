#include "game.h"
#include <iostream>

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
        if(controllerAxisMotion(0))
        {
            camera.transform.position.x += inputControllerAxes[0] * Time::delta;
        }
        
        if(controllerAxisMotion(1))
        {
            camera.transform.position.y -= inputControllerAxes[1] * Time::delta;
        }
    }
}

static void update()
{
    render_useShader(spriteShader);
	
    // If no controller is being used, rotate to the mouse cursor.
    if(!isUsingController)
    {
        ent.transform.rotation = transform2dComponent_rotateToPoint(v2_screenToViewSpace(mousePosition, camera));
    }
    else
    {
        // Only set the analog stick indicator to move if the right analog stick is moving
        if(controllerAxisMotion(2) || controllerAxisMotion(3))
        {
            // Set the red indicator's position relative to the right analog stick rotation.
            analogEntity.transform.position = v2(inputControllerAxes[2] * 0.3f, -inputControllerAxes[3] * 0.3f);
            ent.transform.rotation = transform2dComponent_rotateToPoint(analogEntity.transform.position);
        }
        else
        {
            analogEntity.transform.position = v2(0.0f, 0.0f);
            ent.transform.rotation = 0.0f;
        }
    }
    
    ent2.transform.position = v2(cosf(Time::globalTimer), sinf(2 * Time::globalTimer) / 2);
    
    render_drawSprite(ent2);
    render_drawSprite(ent);
    
    if(isUsingController)
    {
        render_drawSprite(analogEntity);
    }
}

void startGame()
{
	window_create(1024, 768, "It's a window!");
	window_setFunctions(processInputs, update);
    window_setBackgroundImage("../res/images/clouds.png");
    
    render_setup(360);
    
    ecs_init(4, sizeof(SpriteComponent), sizeof(Transform2dComponent), sizeof(Transform3dComponent), sizeof(Camera2dComponent));
    
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