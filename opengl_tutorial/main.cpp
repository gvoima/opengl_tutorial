#include <iostream>
#include "Display.h"
#include "Shader.h"
#include "Mesh.h"

int main(void)
{
	Display display(800, 600, "This is great!");

	Vertex vertices[] = {
		Vertex(glm::vec3(-0.5, -0.5, 0)),
		Vertex(glm::vec3(0, 0.5, 0)),
		Vertex(glm::vec3(0.5 , -0.5, 0)), };

	Mesh mesh(vertices, sizeof(vertices)/sizeof(vertices[0]));

	Shader shader("./res/basicShaderFile");

	while (!display.IsClosed()) {
		display.Clear(0.5f, 0.6f, 0.7f, 0.8f);
		shader.Bind();
		mesh.Draw();
		display.SwapBuffers();
	}

	return 0;
}