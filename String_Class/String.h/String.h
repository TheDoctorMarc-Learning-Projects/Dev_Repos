#ifndef STRING_H
#define STRING_H
#include <string.h>
#include <assert.h>

class String {

private:

	char* string = nullptr;
	unsigned int allocated_memory = 0u;
	
public:

	String() {}
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
		return& this; 
	}

	bool operator==(const String& TheString) const
	{
		bool ret = false; 
		assert(TheString.string != nullptr);
		if (TheString.string != nullptr && this->string == TheString.string) {
				ret = true;
		}
		return ret;
	}

	char* GetChar() const
	{
		assert(this->string != nullptr);
		if (this->string != nullptr) {
			return this->string;
		}
	}

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