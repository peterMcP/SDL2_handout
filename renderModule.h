#ifndef __renderModule_H__
#define __renderModule_H__

// TODO "6": Give a try at creating a render module that just clears screen to black

class renderModule : public Module
{
public:

	bool Init();
	update_status PreUpdate(); 
	update_status Update();
	update_status PostUpdate();
	bool CleanUp();

};

#endif // __renderModule_H__