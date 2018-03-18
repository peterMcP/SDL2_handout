#ifndef __APPLICATION_H__
#define __APPLICATION_H__

#include "Globals.h"
#include "Module.h"
#include "renderModule.h"

#define NUM_MODULES 2

class ModuleWindow; //trick
class renderModule; //trick

class Application
{
public:

	Module* modules[NUM_MODULES];
	ModuleWindow* win;
	renderModule* render;

public:

	Application();

	bool Init();
	update_status Update();
	bool CleanUp();

};

#endif // __APPLICATION_H__