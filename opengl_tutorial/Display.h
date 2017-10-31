#ifndef __DISPLAY_H
#define __DISPLAY_H

#pragma once
#include <string>
#include <SDL2\SDL.h>
// for some odd reason we have to undefine main
// because SDL_main.h is included automatically in SDL.h
// https://stackoverflow.com/questions/6847360/error-lnk2019-unresolved-external-symbol-main-referenced-in-function-tmainc
#undef main

class Display
{
public:
	Display(int width, int height, const std::string& title);
	virtual ~Display();
protected:
	SDL_Window* m_window;
};

#endif // !__DISPLAY_H