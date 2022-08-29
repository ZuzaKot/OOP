#include "LongInt.h"
#include <string.h>

//------------------------------------------------------------------
LongInt LongInt::dopln(double cislo) {
	printf("\nAssign:\t");
	double tmp = this->buf = cislo;
	printf("%3.0f", tmp);
	return *this;
};
//------------------------------------------------------------------
LongInt& LongInt::operator=(const LongInt& s) {   // stejné jako copy
	printf("\nCopy:\t");
	double tmp;
	if (s.buf == 0) { /**/ }
	else {	tmp = this->buf = s.buf; printf("%3.0f", tmp); }
	return *this;
};
//------------------------------------------------------------------
LongInt LongInt::operator+(const LongInt& s) {
	printf("\nPlus:\t");
	double tmp;
	if (s.buf == 0) { /**/ }
	else { tmp = this->buf = (this->buf + s.buf); printf("%3.0f", tmp); }
	return *this;
};
//------------------------------------------------------------------
// Cviceni 5.1														... 5.1
LongInt LongInt::clear() {								// vynuluje					
	this->buf = 0;
	return *this;
};
//------------------------------------------------------------------
LongInt& LongInt::copy(const LongInt& s) {
	printf("\nCopy:\t");
	double tmp;
	if (s.buf == 0) { /**/ }
	else { tmp = this->buf = s.buf; printf("%3.0f", tmp); }
	return *this;
};
//------------------------------------------------------------------
// Cviceni 5.4														... 5.4
LongInt LongInt::operator-(const LongInt& s) {
	printf("\nMinus:\t");
	double tmp;
	if (s.buf == 0) { /**/ }
	else { tmp = this->buf = (this->buf - s.buf); printf("%3.0f", tmp); }
	return *this;
};
//------------------------------------------------------------------
LongInt LongInt::operator*(const LongInt& s) {
	printf("\nMultiply:\t");
	double tmp;
	if (s.buf == 0) { /**/ }
	else { tmp = this->buf = (this->buf * s.buf); printf("%3.0f", tmp); }
	return *this;
};
//------------------------------------------------------------------
LongInt LongInt::operator/(const LongInt& s) {
	printf("\nDevide:\t");
	double tmp;
	if (s.buf == 0) { /**/ }
	else { tmp = this->buf = (this->buf / s.buf); printf("%3.0f", tmp); }
	return *this;
};
//------------------------------------------------------------------
LongInt LongInt::operator+=(const LongInt& s) {
	printf("\nPlus+:\t");
	double tmp;
	if (s.buf == 0) { /**/ }
	else { tmp = this->buf += s.buf; printf("%3.0f", tmp); }
	return *this;
};
//------------------------------------------------------------------
LongInt LongInt::operator-=(const LongInt& s) {
	printf("\nMinus+:\t");
	double tmp;
	if (s.buf == 0) { /**/ }
	else { tmp = this->buf -= s.buf; printf("%3.0f", tmp); }
	return *this;
};
//------------------------------------------------------------------
LongInt LongInt::operator*=(const LongInt& s) {
	printf("\nMultiply+:\t");
	double tmp;
	if (s.buf == 0) { /**/ }
	else { tmp = this->buf *= s.buf; printf("%3.0f", tmp); }
	return *this;
};
//------------------------------------------------------------------
LongInt LongInt::operator/=(const LongInt& s) {
	printf("\nDevide+:\t");
	double tmp;
	if (s.buf == 0) { /**/ }
	else { tmp = this->buf /= s.buf; printf("%3.0f", tmp); }
	return *this;
};
//------------------------------------------------------------------
// Cviceni 5.6														... 5.6
bool LongInt::operator==(const LongInt& s) {
	printf("\nCompare equal:\t");
	if (this->buf == s.buf) { printf("true"); return true; }
	else { printf("false"); return false; }
};
//------------------------------------------------------------------
bool LongInt::operator<=(const LongInt& s) {
	printf("\nCompare less or equal:\t");
	if (this->buf <= s.buf) { printf("true"); return true; }
	else { printf("false"); return false; }
};
//------------------------------------------------------------------
bool LongInt::operator>=(const LongInt& s) {
	printf("\nCompare more or equal:\t");
	if (this->buf >= s.buf) { printf("true"); return true; }
	else { printf("false"); return false; }
};
//------------------------------------------------------------------
bool LongInt::operator!=(const LongInt& s) {
	printf("\nCompare not equal:\t");
	if (this->buf != s.buf) { printf("true"); return true; }
	else { printf("false"); return false; }
};
//------------------------------------------------------------------