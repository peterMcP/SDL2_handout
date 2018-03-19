#ifndef __GLOBALS_H__
#define __GLOBALS_H__

#include <windows.h>
#include <stdio.h>
#include "SDL\include\SDL.h"

#define LOG(txt) OutputDebugString(txt)

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

enum update_status
{
	UPDATE_CONTINUE = 1,
	UPDATE_STOP,
	UPDATE_ERROR
};

// Configuration -----------
#define WIN_TITLE "Hello!"
#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 768
#define FULLSCREEN 0
#define RESIZABLE 1
#define BORDERLESS 0

//more

//SDL_Window* win = nullptr;
//SDL_Renderer* render = nullptr;


#endif // __GLOBALS_H__
