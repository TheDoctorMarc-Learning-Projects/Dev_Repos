#ifndef __j1GUI_OBJECT_H__
#define __j1GUI_OBJECT_H__

#include "j1Gui.h"
#include "p2Point.h"
#include "SDL/include/SDL.h"

class j1Gui_Object : public j1Gui
{
public:

	j1Gui_Object(iPoint pos) {
		this->pos = pos; 
	};

	// Destructor
	virtual ~j1Gui_Object();

	// Called when before render is available
	bool Awake(pugi::xml_node&);

	
private:

	iPoint pos; 
	SDL_Rect rect; 
	TYPE type; 
	

};


#endif // __j1GUI_OBJECT_H__
