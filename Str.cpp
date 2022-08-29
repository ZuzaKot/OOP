#include "Str.h"
#include <string.h>

Str Str::dopln(string text) {
	printf("\nAssign:\t");
	int i = 0;
	this->buf = new char[10];
	for (i; text[i] != '\0'; i++) { this->buf[i] = text[i];	printf("%c", text[i]); }
	if (text[i] == '\0') { this->buf[i] = '\0'; printf("\n"); }
	return *this;
};

Str& Str::operator=(const Str& s) {
	printf("\nCopy:\t");
	if (this->buf == nullptr) { this->buf = new char[20]; }
	
	if (s.buf == nullptr) {
		int i = 0;
		string x = "nahradni text";
		for (i; x[i] != '\0'; i++) {	this->buf[i] = x[i]; printf("%c", x[i]);}
		if (x[i] == '\0') { this->buf[i] = '\0'; printf("\n"); }
	}
	else {
		int i = 0;
		for (i; s.buf[i]!='\0'; i++) {		this->buf[i] = s.buf[i]; printf("%c", s.buf[i]); }
		if (s.buf[i] == '\0') { this->buf[i] = '\0';  printf("\n"); }
	}
	return *this;
};
Str Str::operator+(const Str& s) {
	printf("\nConcat:\t");
	int j = 0;
	if (s.buf == nullptr) {
		int i = 0;
		string x = "nahradni text 2";
		for (i; x[i] != '\0'; i++) { this->buf[i] = x[i]; printf("%c", x[i]); }
		if (x[i] == '\0') { this->buf[i] = '\0';  printf("\n"); }
	}
	else {
		while (this->buf[j] != '\0') {   printf("%c", this->buf[j]); j++; }
		if (this->buf[j] == '\0') {
			this->buf[j] = *new char[1];
			int i = 0;
			for (i; s.buf[i] != '\0'; i++) { this->buf[j] = s.buf[i]; j++;  printf("%c", s.buf[i]); }
			if (s.buf[i] == '\0') { this->buf[j] = '\0';  printf("\n"); }
		}
	}
	return *this;
};
//------------------------------------------------------------------
// Cviceni 5.6														... 5.6
bool Str::operator==(const Str& s) {
	printf("\nCompare equal:\t");
	int x = strcmp(this->buf, s.buf);
	if (x == 0) { printf("true"); return true; }
	else { printf("false"); return false; }
};
//------------------------------------------------------------------
bool Str::operator<=(const Str& s) {
	printf("\nCompare less or equal:\t");
	int x = strcmp(this->buf, s.buf);
	if (x == -1) { printf("true"); return true; }
	else { printf("false"); return false; }
};
//------------------------------------------------------------------
bool Str::operator>=(const Str& s) {
	printf("\nCompare more or equal:\t");
	int x = strcmp(this->buf, s.buf);
	if (x == 1) { printf("true"); return true; }
	else { printf("false"); return false; }
};
//------------------------------------------------------------------
bool Str::operator!=(const Str& s) {
	printf("\nCompare not equal:\t");
	int x = strcmp(this->buf, s.buf);
	if (x != 0) { printf("true"); return true; }
	else { printf("false"); return false; }
};
//------------------------------------------------------------------