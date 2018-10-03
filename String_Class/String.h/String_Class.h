#ifndef STRING_CLASS_H
#define STRING_CLASS_H
#include<string>

class String {
private: 
	const char* name = nullptr; 
	unsigned int allocated_memory = 0u; 

public:

	String() {}
	String(const char* name) :name(name) {
		allocated_memory = 
	}
    

	/*String Assign(String &string2) {
		this->name = string2.name; 
		return*this; 
	}

	String operator=(const char* name) {
	   this->name = name; 
	   return*this; 
	}

	bool operator==(const char* name) const {
		if (this->name == name) {
			return true; 
		}
		return false; 
	}*/



};

#endif 
