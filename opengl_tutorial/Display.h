#ifndef __DISPLAY_H
#define __DISPLAY_H

#pragma once
#include <string>
#include <SDL2\SDL.h>

class Display
{
public:
	Display(int width, int height, const std::string& title);
	virtual ~Display();
protected:
	SDL_Window* m_window;
};

#endif // !__DISPLAY_H