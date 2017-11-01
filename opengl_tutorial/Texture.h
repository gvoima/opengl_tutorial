#pragma once

#include <string>
#include <GL\glew.h>

class Texture
{
public:
	Texture(const std::string& fileName);
	void Bind(unsigned int unit);
	virtual ~Texture();
private:
	int i;
	GLuint m_texture;
};