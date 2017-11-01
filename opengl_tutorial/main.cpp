#include <iostream>
#include "Display.h"
#include "Shader.h"
#include "Mesh.h"
#include "Texture.h"
//#include "Transform.h"

int WinMain(void) // we use windows windowing, se set the main entrypoint to winmain
{
	Display display(800, 600, "This is great!");
 
	Vertex vertices[] = {
		/*Vertex(glm::vec3(0.0, 0.0, 0.0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(0.0, 0.0, 0.0), glm::vec2(0.5, 1.0)),
		Vertex(glm::vec3(0.0, 0.0, 0.0), glm::vec2(1.0, 0.0)), };*/

		Vertex(glm::vec3(-0.5, -0.5, 0), glm::vec2(0.0, 0.0)),
		Vertex(glm::vec3(	0,	0.5, 0), glm::vec2(0.5, 1.0)),
		Vertex(glm::vec3(0.5 , -0.5, 0), glm::vec2(1.0, 0.0)), };

	Mesh mesh(vertices, sizeof(vertices)/sizeof(vertices[0]));
	Shader shader("./res/basicShaderFile");
	//Texture texture("./res/illumi.png");
	Texture texture("./res/bricks.jpg");
	Transform transform;

	float counter = 0.0f;

	while (!display.IsClosed()) {
		display.Clear(0.0f, 0.15f, 0.3f, 1.0f);

		transform.GetPos().x = sinf(counter);
		//transform.GetRot().z = counter * 2; // cosf(counter * 10);
		//transform.GetScale() = cosf(counter);

		shader.Bind();
		texture.Bind(0);
		shader.Update(transform);

		mesh.Draw();

		display.SwapBuffers();
		counter += 0.001f;
	}

	return 0;
}