#pragma once

#include <string>
#include <SDL2\SDL.h>
#include <GL\glew.h>
// for some odd reason we have to undefine main
// because SDL_main.h is included automatically in SDL.h
// https://stackoverflow.com/questions/6847360/error-lnk2019-unresolved-external-symbol-main-referenced-in-function-tmainc
#undef main

class Display
{
public:
	Display(int width, int height, const std::string& title);
	void Clear(float r, float g, float b, float a);
	void SwapBuffers();
	bool IsClosed();
	virtual ~Display();
private:
	SDL_Window* m_window;
	SDL_GLContext m_glContext;
	bool m_isClosed;
};