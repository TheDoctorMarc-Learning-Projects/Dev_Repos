#ifndef STRING_H
#define STRING_H

class String {
public: 
	const char* name; 
	String() {}; 
	String(const char* name) :name(name) {}

	String Assign(String &string2) {
		this->name = string2.name; 
		return*this; 
	}

	String operator=(const char* name) {
	   this->name = name; 
	   return*this; 
	}

};

#endif // !STRING_H

