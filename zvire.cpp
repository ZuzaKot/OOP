#include "zvire.h"
#include <string>
using namespace std;

int Zvire::jez(int jidlo) {
	if (!zije()) return 0;
	Zvire::stari();
	return zaludek += jidlo;
}

int Zvire::vymesuj(int objem) {
	if ((zaludek -= objem) <= 0) zaludek = 0;
	return zaludek;
}
//----------------------------------------------------------------------
// Cviceni_2_5:
string Zvire::jmeno(string jmeno2) {
	string getName = jmeno2;
	for (int i = 0; i < getName.length(); i++) { printf("%c", getName[i]); }
	printf("\n\n");
	this->meno = getName;
	return getName;
}
//----------------------------------------------------------------------
