#include <iostream>
#include "Display.h"

int main(void)
{
	Display display(800, 600, "This is great!");

	while (!display.IsClosed()) {
		display.Clear(0.5f, 0.6f, 0.7f, 0.8f);
		display.SwapBuffers();
	}

	return 0;
}