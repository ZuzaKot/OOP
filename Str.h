#pragma once
#include <string.h>
#include <string>
using namespace std;

class Str {
private:
	char* buf;
public:
	Str() { buf = 0; };

	Str dopln(string text);			
	//Str(const Str& s);
	//Str(const char* s);
	~Str() { delete[] buf; };		
	Str& operator=(const Str& s);	
	Str operator+(const Str& s);	
	bool operator==(const Str& s);			
	bool operator<=(const Str& s);			
	bool operator>=(const Str& s);			
	bool operator!=(const Str& s);			
};

class Str_child :public Str {
private:
public:
	Str_child(){};
	~Str_child(){};
	bool shodnost(string a, string b);
};