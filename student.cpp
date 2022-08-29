#include "student.h"
#include "seznam.h"
#include <stdio.h>
#include <string>
using namespace std;

Znamka Student::zapocet(Predmet x) {
	subject = x;
	mark = Znamka::z;
	Student::maZapocet();
	return mark;
};
//-------------------------------------------------------------------------------
Znamka Student::zkouska(Predmet x, Znamka y) {
	if (mark != Znamka::z) return Znamka::n;
	else mark = y;
	subject = x;
	Student::zapisy(x, y);
	if (zapis == 1) {
		nextik = Student::novy(x, y); // vytváøí lineární spojový seznam
	}
	else {
		nextik = Student::novy2(x, y, nextik);	// pøidává do lineárního spojového seznamu
	};
	Student::maZkousek();
	return mark;
};
//-------------------------------------------------------------------------------
Znamka Student::zapisy(Predmet x, Znamka y) {
	if ((subject != x) || (zapis < 20)) {
		zapis += 1;
		return mark = y;
	}
	else return mark = Znamka::F;
};
//-------------------------------------------------------------------------------
Prochazej Student::novy(Predmet x, Znamka y) {
	Prochazej novy1 = Prochazej();
	Prochazej next1 = Prochazej(); // naèítá pøedposlední uložené hodnoty (pøedmìt a známku).... <- chtìlo by zjistit proè
	novy1.nazev = x;
	novy1.hodnoceni = y;
	novy1.dalsi = new Prochazej;
	novy1.dalsi->nazev = next1.nazev;
	novy1.dalsi->hodnoceni = next1.hodnoceni;
	return novy1;
};
//-------------------------------------------------------------------------------
Prochazej Student::novy2(Predmet x, Znamka y, Prochazej nextik) {
	Prochazej novy2 = Prochazej();
	Prochazej next2 = nextik;
	novy2.nazev = x;
	novy2.hodnoceni = y;
	novy2.dalsi = new Prochazej;
	*novy2.dalsi = next2;
	return novy2;
};
//-------------------------------------------------------------------------------
float Student::seznam(Prochazej next3) {
	float a = 0.0;
	int i = 0;

	while (Student::nextik.dalsi != nullptr) {
		if (Student::nextik.hodnoceni != Znamka::z) {
			if (Student::nextik.hodnoceni == Znamka::A) a += 1.0;
			if (Student::nextik.hodnoceni == Znamka::B) a += 1.5;
			if (Student::nextik.hodnoceni == Znamka::C) a += 2.0;
			if (Student::nextik.hodnoceni == Znamka::D) a += 2.5;
			if (Student::nextik.hodnoceni == Znamka::E) a += 3.0;
			if (Student::nextik.hodnoceni == Znamka::F) a += 4.0;
			if (Student::nextik.hodnoceni == Znamka::n) a += 0.0;
			i += 1;
			if (Student::nextik.dalsi != nullptr)Student::nextik = *Student::nextik.dalsi;
		}
		else break;
	}
	return a / i;
};
//-------------------------------------------------------------------------------
float Student::prumer() {
	if (Student::nextik.dalsi != nullptr) {
		return seznam(Student::nextik);
	}
	else return 0.0;
};
//-------------------------------------------------------------------------------

//----------------------------------------------------------------------
// Cviceni_2_5:
string Student::jmeno(string jmeno2) {
	string getName = jmeno2;
	for (int i = 0; i < getName.length(); i++) { printf("%c", getName[i]); }
	printf("\n\n");
	this->meno = getName;
	return getName;
}
//----------------------------------------------------------------------
