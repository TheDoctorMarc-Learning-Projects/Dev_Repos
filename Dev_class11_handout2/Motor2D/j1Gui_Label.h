#ifndef __j1GUI_LABEL_H__
#define __j1GUI_LABEL_H__

#include "j1Gui_Object.h"
#include "p2Point.h"
#include "SDL/include/SDL.h"

struct _TTF_Font;
struct SDL_Color; 

class j1Gui_Label : public j1Gui_Object
{
public:

	j1Gui_Label(iPoint pos, SDL_Rect atlas_rect, char* text, SDL_Color c) : j1Gui_Object(pos, atlas_rect) {
		this->text = text; 
		color = c; 
		
	};

	// Destructor
	virtual ~j1Gui_Label() {};

	// Called when before render is available
	bool Awake(pugi::xml_node&);

	/*void Blit() {
	};*/


private:
	_TTF_Font* font; 
	char* text = nullptr; 
	SDL_Color color; 
};


#endif // __j1GUI_LABEL_H__