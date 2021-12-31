#include "renderer.h"
#include "../ecs/components/transform_component.h"
#include "../ecs/components/camera_component.h"
#include "window.h"

float sprite_resolution;
Camera2dComponent camera;

void render_setup(float spriteRes)
{
    sprite_resolution = 1.0f/spriteRes;
    camera2dComponent_init(camera, v2(0.0f, 0.0f), 0.0f);
    camera.projMat = m4_ortho(-window.aspectRatio, window.aspectRatio, -1.0f, 1.0f, -1.0f, 1.0f);
}

void render_useShader(Shader shader)
{
    render_shader = shader;
    shader_use(render_shader);
}

void render_drawSprite(SpriteEntity& sprite)
{
    shader_set_m4(render_shader, "transform", transform2dComponent_getOrtho(camera, sprite.transform));
    
    sprite.draw();
}

void render_updateCamProjection()
{
    camera.projMat = m4_ortho(-window.aspectRatio, window.aspectRatio, -1.0f, 1.0f, -1.0f, 1.0f);
}