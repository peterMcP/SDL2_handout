#ifndef __ModuleWindow_H__
#define __ModuleWindow_H__

#include "Module.h"
#include "SDL\include\SDL.h"

// TODO 1: Create the declaration of ModuleWindow class

class ModuleWindow : public Module
{
public:

	//ModuleWindow(Application* App);

	bool Init();// { return true; }
	bool CleanUp();// { return true; }

public:

	SDL_Window* win;
	SDL_Surface* screen_surface;

};

#endif // __ModuleWindow_H__