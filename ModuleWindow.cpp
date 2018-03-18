#include "Globals.h"
#include "Application.h"
#include "ModuleWindow.h"
#include "SDL\include\SDL.h"

// TODO 2: Init the library and check for possible error
// using SDL_GetError()

// TODO 3: pick the width and height and experiment with flags: borderless / fullscreen / resizable,
// then create the window and check for errors

// TODO 4: Finally create a screen surface and keep it as a public variable

// TODO 5: Fill with code CleanUp() method :)

/*ModuleWindow::ModuleWindow(Application* App)
{
	win = NULL;
	screen_surface = NULL;
}*/


bool ModuleWindow::Init()
{
	int ok = SDL_Init(SDL_INIT_VIDEO);
	if (ok > 0)
	{
		LOG(SDL_GetError());
		//SDL_Quit();
		return false;
	}

	SDL_WINDOW_RESIZABLE;

	Uint32 flags = NULL;
	
	if (FULLSCREEN > 0) flags += SDL_WINDOW_FULLSCREEN;
	if (RESIZABLE > 0) flags += SDL_WINDOW_RESIZABLE;
	if (BORDERLESS > 0) flags += SDL_WINDOW_BORDERLESS;
	
	win = SDL_CreateWindow(WIN_TITLE, NULL,NULL, SCREEN_WIDTH, SCREEN_HEIGHT,flags);
	//SDL_CreateTextureFromSurface

	return true;
}

bool ModuleWindow::CleanUp()
{
	SDL_Quit();
	return true;
}

