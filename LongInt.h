#pragma once
#include <string.h>
#include <string>
using namespace std;

class LongInt {
private:
	double buf;
public:
	LongInt() { buf = 0; };

	LongInt dopln(double cislo);				// assignment
	//~LongInt() { delete[] buf; };				// destruct
	LongInt& operator=(const LongInt& s);		// copy
	LongInt operator+(const LongInt& s);		// plus
	//------------------------------------------------------------------
	// Cviceni 5.1
	LongInt clear();
	LongInt& copy(const LongInt& s);
	//------------------------------------------------------------------
	// Cviceni 5.4
	LongInt operator-(const LongInt& s);		// minus
	LongInt operator*(const LongInt& s);		// multiply
	LongInt operator/(const LongInt& s);		// devide
	LongInt operator+=(const LongInt& s);		// plus+
	LongInt operator-=(const LongInt& s);		// minus+
	LongInt operator*=(const LongInt& s);		// multiply+
	LongInt operator/=(const LongInt& s);		// devide+
	//------------------------------------------------------------------
	// Cviceni 5.6
	bool operator==(const LongInt& s);			// compare equal
	bool operator<=(const LongInt& s);			// compare less or equal
	bool operator>=(const LongInt& s);			// compare more or equal
	bool operator!=(const LongInt& s);			// compare not equal
};