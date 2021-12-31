#include "shader.h"
#include <iostream>
#include <fstream>

std::string LoadShader(const std::string& fileName);
void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage);
GLuint CreateShader(const std::string& text, unsigned int type);

Shader shader_create(const std::string& fileName)
{
	Shader self;
    
	self = glCreateProgram();
	GLuint vertShader = CreateShader(LoadShader(fileName + ".vs"), GL_VERTEX_SHADER);
	GLuint fragShader = CreateShader(LoadShader(fileName + ".fs"), GL_FRAGMENT_SHADER);
    
	glAttachShader(self, vertShader);
	glAttachShader(self, fragShader);
    
	glLinkProgram(self);
	CheckShaderError(self, GL_LINK_STATUS, true, "Error linking shader program");
    
	glValidateProgram(self);
	CheckShaderError(self, GL_LINK_STATUS, true, "Invalid shader program");
    
	glDetachShader(self, vertShader);
	glDeleteShader(vertShader);
    
	glDetachShader(self, fragShader);
	glDeleteShader(fragShader);
    
	return self;
}

void shader_destroy(Shader self)
{
	glDeleteProgram(self);
}

void shader_use(Shader self)
{
	glUseProgram(self);
}

std::string LoadShader(const std::string& fileName)
{
	std::ifstream file;
	file.open((fileName).c_str());
    
	std::string output;
	std::string line;
    
	if(file.is_open())
	{
		while(file.good())
		{
			getline(file, line);
			output.append(line + "\n");
		}
	}
	else
	{
		std::cerr << "Unable to load shader: " << fileName << std::endl;
	}
    
	return output;
}

void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage)
{
	GLint success = 0;
	GLchar error[1024] = { 0 };
    
	if(isProgram)
		glGetProgramiv(shader, flag, &success);
	else
		glGetShaderiv(shader, flag, &success);
    
	if(success == GL_FALSE)
	{
		if(isProgram)
			glGetProgramInfoLog(shader, sizeof(error), NULL, error);
		else
			glGetShaderInfoLog(shader, sizeof(error), NULL, error);
        
		std::cerr << errorMessage << ": '" << error << "'" << std::endl;
	}
}

GLuint CreateShader(const std::string& text, unsigned int type)
{
	GLuint shader = glCreateShader(type);
    
	if(shader == 0)
		std::cerr << "Error compiling shader type " << type << std::endl;
    
	const GLchar* p[1];
	p[0] = text.c_str();
	GLint lengths[1];
	lengths[0] = text.length();
    
	glShaderSource(shader, 1, p, lengths);
	glCompileShader(shader);
    
	CheckShaderError(shader, GL_COMPILE_STATUS, false, "Error compiling shader!");
    
	return shader;
}





void shader_set_bool(Shader shader, const char* name, bool value)
{
	glUniform1i(glGetUniformLocation(shader, name), (int)value);
}

void shader_set_int(Shader shader, const char* name, int value)
{
	glUniform1i(glGetUniformLocation(shader, name), value);
}

void shader_set_float(Shader shader, const char* name, float value)
{
	glUniform1f(glGetUniformLocation(shader, name), value);
}

void shader_set_float_with_location(GLint ID, float value)
{
	glUniform1f(ID, value);
}

void shader_set_v2(Shader shader, const char* name, const v2& value)
{
	glUniform2f(glGetUniformLocation(shader, name), value.x, value.y);
}

void shader_set_v3(Shader shader, const char* name, const v3& value)
{
	glUniform3f(glGetUniformLocation(shader, name), value.x, value.y, value.z);
}

void shader_set_v4(Shader shader, const char* name, const v4& value)
{	
	glUniform4f(glGetUniformLocation(shader, name), value.x, value.y, value.z, value.w);
}

void shader_set_m4(Shader shader, const char* name, const m4& mat)
{
	glUniformMatrix4fv(glGetUniformLocation(shader, name), 1, GL_TRUE, &mat.data[0][0]);
}