<<<<<<< HEAD:String_Class/String.h/String.h
#ifndef STRING_H
#define STRING_H
#include <string.h>
#include <assert.h>
class String {

private:
	char* string = nullptr;
	unsigned int allocated_memory = 0u;
	
=======
#ifndef STRING_CLASS_H
#define STRING_CLASS_H
#include<string>

class String {
private: 
	const char* name = nullptr; 
	unsigned int allocated_memory = 0u; 
>>>>>>> 1f2ae350ce0fdbab881d461c9e68c7b9a2df75ac:String_Class/String.h/String_Class.h

public:

	String() {}
<<<<<<< HEAD:String_Class/String.h/String.h
	String(const char* string)
	{
		assert(string != nullptr);
		if (string != nullptr) {
			allocated_memory = strlen(string) + 1;
			this->string = new char[allocated_memory];
			strcpy_s(this->string, allocated_memory, string);
		}
	} 
	String(const String& TheString)
	{
		assert(TheString.string != nullptr);
		if (TheString.string != nullptr) {
			allocated_memory = TheString.allocated_memory;
			this->string = new char[allocated_memory];
			strcpy_s(this->string, allocated_memory, TheString.string);
		}
	}

	String operator=(const char* string)
	{ 
		if (strlen(string) + 1 <= this->allocated_memory) {
			allocated_memory = strlen(string) + 1;
			strcpy_s(this->string, allocated_memory, string);
		}
=======
	String(const char* name) :name(name) {
		allocated_memory = 
	}
    

	/*String Assign(String &string2) {
		this->name = string2.name; 
		return*this; 
>>>>>>> 1f2ae350ce0fdbab881d461c9e68c7b9a2df75ac:String_Class/String.h/String_Class.h
	}

	bool operator==(const char* string)
	{
		bool ret = false; 
		if (this->string == string) {
			ret = true; 
		}
		return ret;
	}

	char* GetChar()
	{
		assert(this->string != nullptr);
		if (this->string != nullptr) {
			return this->string;
		}
<<<<<<< HEAD:String_Class/String.h/String.h
	}
=======
		return false; 
	}*/


>>>>>>> 1f2ae350ce0fdbab881d461c9e68c7b9a2df75ac:String_Class/String.h/String_Class.h

	~String()
	{
		if (string != nullptr) {
			delete[] string;
			string = nullptr;
			allocated_memory = 0u;
		}
	}
};


#endif