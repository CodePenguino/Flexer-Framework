#include "sprite.h"

#include "../components/sprite_component.h"
#include "../components/transform_component.h"

void SpriteEntity::init(const std::string& imagePath)
{
	entity = ecs_create();
    
    transform = transform2dComponent_init();
    sprite = spriteComponent_init(imagePath);
    
    ecs_add(entity, 0, &transform);
    ecs_add(entity, 1, &sprite);
}

void SpriteEntity::draw()
{
    glBindTexture(GL_TEXTURE_2D, sprite.texture_id);
    glBindVertexArray(sprite.vao);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
    glBindVertexArray(0);
}

void SpriteEntity::destroy()
{
    spriteComponent_destroy(sprite);
    ecs_kill(entity);
}