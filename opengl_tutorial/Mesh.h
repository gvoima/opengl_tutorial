#pragma once

#include <GLM\glm.hpp>
#include <GL\glew.h>
class Vertex {
public:
	Vertex(const glm::vec3& pos, const glm::vec2& texCoord) {
		this->pos = pos;
		this->texCoord = texCoord;
	}

	inline glm::vec3* getPos() { return &pos; }
	inline glm::vec2* getTexCoord() { return &texCoord; }
protected:
	glm::vec3 pos;
	glm::vec2 texCoord;
};

class Mesh
{
public:
	Mesh(Vertex* vertices, unsigned int numVertices);
	void Draw();
	virtual ~Mesh();
private:
	enum {
		POSITION_VB,
		TEXCOORD_VB,
		NUM_BUFFERS
	};

	GLuint m_vertexArrayObject; // 3.0 and later
	GLuint m_vertexArrayBuffers[NUM_BUFFERS];
	unsigned int m_drawCount;
};