#include "j1Gui_Label.h"
#include "j1Fonts.h"
#include "j1App.h"


// Called before render is available
bool j1Gui_Label::Awake(pugi::xml_node& conf)
{
	font = App->font->Load("fonts/open_sans/OpenSans-Bold.ttf", 12); 
	return true; 
}
