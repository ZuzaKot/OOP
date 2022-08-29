#pragma once
#include <string.h>
#include <string>
using namespace std;

class Str {
private:
	char* buf;
public:
	Str() { buf = 0; };

	Str dopln(string text);			// assignment
	//Str(const Str& s);
	//Str(const char* s);
	//~Str() { delete[] buf; };		// destruct
	Str& operator=(const Str& s);	// copy
	Str operator+(const Str& s);	// concat
	//------------------------------------------------------------------
	// Cviceni 5.6
	bool operator==(const Str& s);			// compare equal
	bool operator<=(const Str& s);			// compare less or equal
	bool operator>=(const Str& s);			// compare more or equal
	bool operator!=(const Str& s);			// compare not equal
};