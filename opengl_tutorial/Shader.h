#ifndef __SHADER_H
#define __SHADER_H
#pragma once

#include <string>
#include <GL\glew.h>

class Shader
{
public:
	Shader(const std::string& fileName);
	void Bind();
	virtual ~Shader();
private:
	static const unsigned int NUM_SHADERS = 2;
	GLuint m_program;
	GLuint m_shaders[NUM_SHADERS];
};

#endif // !__SHADER_H