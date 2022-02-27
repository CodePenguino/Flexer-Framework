#include "game.h"
#include <iostream>
#include <glm/glm.hpp>

static void processInputs()
{
	if(Input::keyPressed(GLFW_KEY_W))
	{
		camera.transform.position.y += Time::delta;
	}
	
	if(Input::keyPressed(GLFW_KEY_S))
	{
		camera.transform.position.y -= Time::delta;
	}
	
	if(Input::keyPressed(GLFW_KEY_D))
	{
		camera.transform.position.x += Time::delta;
	}
	
	if(Input::keyPressed(GLFW_KEY_A))
	{
		camera.transform.position.x -= Time::delta;
	}

	if(Input::keyPressed(GLFW_KEY_LEFT))
	{
		camera.transform.rotation -= Time::delta;
	}

	if(Input::keyPressed(GLFW_KEY_RIGHT))
	{
		camera.transform.rotation += Time::delta;
	}
}

static void update()
{
	render_useShader(spriteShader);
	
	ent.transform.rotation = transform2dComponent_rotateToPoint(screenToViewSpace(Input::mousePosition, camera));
	ent2.transform.position = glm::vec2(cosf(Time::globalTimer), sinf(2 * Time::globalTimer) / 2);
	analogEntity.transform.position = screenToViewSpace(Input::mousePosition, camera);

	render_drawSprite(ent2);
	render_drawSprite(ent);   
	render_drawSprite(analogEntity);
}

namespace Game
{

void start()
{
	window_create(1280, 720, "It's a window!", false);
	window_setFunctions(processInputs, update);
	window_setBackgroundImage("../res/images/clouds.png");
	
	Time::FPSLimit = 120;

	render_setup(360);
	
	ecs_init(4, sizeof(SpriteComponent), sizeof(Transform2dComponent), sizeof(Transform3dComponent), sizeof(Camera2dComponent));
	
	spriteShader = shader_create("../res/shaders/sprite");
	
	ent.init("../res/images/Cross.png");
	ent2.init("../res/images/Placeholder.png");
	analogEntity.init("../res/images/AnalogCross.png");
	
	loop();
	stop();
}

void stop()
{
	ent.destroy();
	ent2.destroy();
	analogEntity.destroy();
	
	ecs_free();
	
	shader_destroy(spriteShader);
	window_destroy();
}

void loop()
{
	window_mainloop();
}

};
