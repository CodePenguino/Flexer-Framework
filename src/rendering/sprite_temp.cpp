#include "sprite_temp.h"

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include <iostream>
#include "renderer.h"

/*void Sprite::init(const std::string& texturePath)
{
    stbi_set_flip_vertically_on_load(true);
    
    int width, height, nrChannels;
    unsigned char* data = stbi_load(texturePath.c_str(), &width, &height, &nrChannels, 0);
    
    if(!data)
    {
        std::cerr << "Error: Failed to load image: " << texturePath << std::endl;
        return;
    }
    
    glGenTextures(1, &texture_id);
    glBindTexture(GL_TEXTURE_2D, texture_id);
    
    // The image will wrap around repeating
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    
	// No filtering
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, nrChannels == 3 ? GL_RGB : GL_RGBA, GL_UNSIGNED_BYTE, data);
    
    stbi_image_free(data);
    
    float scalerX = sprite_resolution * width;
	float scalerY = sprite_resolution * height;
    
    const GLfloat sprite_default_vertices[16] = {
        // positions         // texture coords
        // 0.5f,  0.5f,         1.0f, 1.0f,
        // 0.5f, -0.5f,         1.0f, 0.0f,
        // -0.5f, -0.5f,        0.0f, 0.0f,
        // -0.5f,  0.5f,        0.0f, 1.0f
        scalerX,  scalerY,    1.0f, 1.0f,
        scalerX, -scalerY,    1.0f, 0.0f,
        -scalerX, -scalerY,    0.0f, 0.0f,
        -scalerX,  scalerY,    0.0f, 1.0f
    };
    
    
    // Generate the buffers and the vertex array
    glGenVertexArrays(1, &vao);
    glGenBuffers(1, &vbo);
    glGenBuffers(1, &ebo);
    
    // Bind dat VAO!
    glBindVertexArray(vao);
    
    // Setup for VBO
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(sprite_default_vertices), sprite_default_vertices, GL_STATIC_DRAW);
    
    // Setup for EBO
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(sprite_default_indices), sprite_default_indices, GL_STATIC_DRAW);
    
    // Position attribute setup
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(GLfloat), (GLvoid*)0);
    glEnableVertexAttribArray(0);
    
    // Texture attribute setup
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(GLfloat), (GLvoid*)(2 * sizeof(GLfloat)));
    glEnableVertexAttribArray(1);
    
    // Unbind everything
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
}

void Sprite::draw()
{
    glBindTexture(GL_TEXTURE_2D, texture_id);
    glBindVertexArray(vao);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
    glBindVertexArray(0);
}

void Sprite::destroy()
{
    glDeleteVertexArrays(1, &vao);
    glDeleteBuffers(1, &vbo);
    glDeleteBuffers(1, &ebo);
}*/