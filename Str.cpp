#include "Str.h"
#include <string.h>


bool Str_child::shodnost(string a, string b) {
	bool shodnost = false;
	int k = 0;
	for (int i = 0; a[i] != '\0'; i++) { // výpis porovnávaných øetìzcù na obrazovku
		if (i==0)printf("Retezec\t"); 
		printf("%c", a[i]); 
		if (a[i + 1] == '\0') {
			printf("\t a retezec\t");
			for (int j = 0; b[j] != '\0'; j++) {
				printf("%c", b[j]);
				if (b[j + 1] == '\0')printf("\t\t");
			}
		}
	}
	for (k; a[k] != '\0' || b[k] != '\0'; k++) {
		a[k] = ::tolower(a[k]);
		b[k] = ::tolower(b[k]);
		if ((a[k + 1] == '\0' && b[k + 1] != '\0')|| (b[k + 1] == '\0' && a[k + 1] != '\0')){ // pokud je jeden øetìzec delší, vrací false
			printf("...NEjsou shodne.\n");
			return shodnost;
		}
	}
	for (k = 0; a[k] != '\0' || b[k] != '\0'; k++) {
		if (strcmp(&a[k], &b[k]) != 0) {	// pokud se znaky z øetìzcù neshodují, vrací false
			shodnost = false;
			printf("...NEjsou shodne.\n"); 
			return shodnost; 
		}
		else {
			shodnost = true;	// pokud se znaky z øetìzcù shodují, shodnost mìní na true a iteruje dál
			if (a[k + 1] == '\0' && b[k + 1] == '\0') { // pokud platí výše uvedené a souèasnì se jedná o poslední znak, vrací true
				printf("...JSOU shodne.\n");
				return shodnost;
			}
		}
	}
};
//------------------------------------------------------------------
Str Str::dopln(string text) {
	printf("\nAssign:\t");
	int i = 0;
	this->buf = new char[10];
	for (i; text[i] != '\0'; i++) { this->buf[i] = text[i];	printf("%c", text[i]); }
	if (text[i] == '\0') { this->buf[i] = '\0'; printf("\n"); }
	return *this;
};
//------------------------------------------------------------------
Str& Str::operator=(const Str& s) {
	printf("\nCopy:\t");
	if (this->buf == nullptr) { this->buf = new char[20]; }

	if (s.buf == nullptr) {
		int i = 0;
		string x = "nahradni text";
		for (i; x[i] != '\0'; i++) { this->buf[i] = x[i]; printf("%c", x[i]); }
		if (x[i] == '\0') { this->buf[i] = '\0'; printf("\n"); }
	}
	else {
		int i = 0;
		for (i; s.buf[i] != '\0'; i++) { this->buf[i] = s.buf[i]; printf("%c", s.buf[i]); }
		if (s.buf[i] == '\0') { this->buf[i] = '\0';  printf("\n"); }
	}
	return *this;
};
//------------------------------------------------------------------
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
		while (this->buf[j] != '\0') { printf("%c", this->buf[j]); j++; }
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