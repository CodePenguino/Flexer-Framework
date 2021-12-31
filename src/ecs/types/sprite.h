#pragma once

#include "../../ecs/ecs.h"
#include "../components/comp_data.h"

class SpriteEntity
{
    public:
    void init(const std::string& imagePath = "../res/images/Flexer_MISSING_TEXTURE.png");
	void draw();
	void destroy();
    
    Entity entity;
	Transform2dComponent transform;
	SpriteComponent sprite;
};