#include "sprite_component.h"
#include <GL/glew.h>
#include "../../rendering/stb_image.h"
#include "../../rendering/renderer.h"
#include <iostream>

SpriteComponent spriteComponent_init(const std::string& texturePath)
{
	SpriteComponent self;
    
	stbi_set_flip_vertically_on_load(true);
	
	int width, height, nrChannels;
	unsigned char* data = stbi_load(texturePath.c_str(), &width, &height, &nrChannels, 0);
	
	if(!data)
	{
		std::cerr << "Error: Failed to load image: " << texturePath << std::endl;
		return self;
	}
	
	glGenTextures(1, &self.texture_id);
	glBindTexture(GL_TEXTURE_2D, self.texture_id);
	
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
	glGenVertexArrays(1, &self.vao);
	glGenBuffers(1, &self.vbo);
	glGenBuffers(1, &self.ebo);
	
	// Bind dat VAO!
	glBindVertexArray(self.vao);
	
	// Setup for VBO
	glBindBuffer(GL_ARRAY_BUFFER, self.vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(sprite_default_vertices), sprite_default_vertices, GL_STATIC_DRAW);
	
	// Setup for EBO
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, self.ebo);
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
    
	return self;
}

SpriteComponent spriteComponent_initBackground(const std::string& texturePath)
{
    SpriteComponent self;
    
	stbi_set_flip_vertically_on_load(true);
	
	int width, height, nrChannels;
	unsigned char* data = stbi_load(texturePath.c_str(), &width, &height, &nrChannels, 0);
	
	if(!data)
	{
		std::cerr << "Error: Failed to load image: " << texturePath << std::endl;
		return self;
	}
	
	glGenTextures(1, &self.texture_id);
	glBindTexture(GL_TEXTURE_2D, self.texture_id);
	
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
        1.0f,  1.0f,         1.0f, 1.0f,
        1.0f, -1.0f,         1.0f, 0.0f,
        -1.0f, -1.0f,        0.0f, 0.0f,
        -1.0f,  1.0f,        0.0f, 1.0f
	};
	
	
	// Generate the buffers and the vertex array
	glGenVertexArrays(1, &self.vao);
	glGenBuffers(1, &self.vbo);
	glGenBuffers(1, &self.ebo);
	
	// Bind dat VAO!
	glBindVertexArray(self.vao);
	
	// Setup for VBO
	glBindBuffer(GL_ARRAY_BUFFER, self.vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(sprite_default_vertices), sprite_default_vertices, GL_STATIC_DRAW);
	
	// Setup for EBO
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, self.ebo);
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
    
	return self;
}

void spriteComponent_draw(SpriteComponent& self)
{
    glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, self.texture_id);
    
	glBindVertexArray(self.vao);
	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
	glBindVertexArray(0);
}

void spriteComponent_destroy(SpriteComponent& self)
{
	glDeleteVertexArrays(1, &self.vao);
	glDeleteBuffers(1, &self.vbo);
	glDeleteBuffers(1, &self.ebo);
}