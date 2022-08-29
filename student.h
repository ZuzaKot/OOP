#pragma once
#include "znamka.h"
#include "predmet.h"
#include "seznam.h"
#include <string>
using namespace std;

class Student
{
private:
	Predmet subject;
	Znamka mark;
	int zapis;
	int zapoctu;
	int zkousek;
	string meno;

public:

	Student() { subject; mark; zapis = 0; zapoctu = 0; zkousek = 0; meno; }; // uchov�v� ke ka�d�mu studentovi p�edm�t, zn�mku a po�et pokus�

	//----------------------------------------------------------------------
	// Cviceni_2_4:
	//Student(const Student&);            // Declare copy constructor. (@Microsoft)
	//Student& operator=(const Student& x); // Declare copy assignment. (@Microsoft)

	//----------------------------------------------------------------------

	Prochazej nextik = Prochazej(); // sem se ukl�daj� hotov� z�po�ty a zkou�ky studenta
	Prochazej novy(Predmet x, Znamka y); // pouze pro �pln� prvn� zkou�ku (za��tek line�rn�ho seznamu)
	Prochazej novy2(Predmet x, Znamka y, Prochazej next2); // pro druhou a dal�� zkou�ku
	Znamka zapocet(Predmet x); // zap�e k p�edm�tu z�po�et, zn�mka z
	int maZapocet() { return zapoctu += 1; }; // mo�n� zbyte�n�....
	int maZkousek() { return zkousek += 1; }; // mo�n� zbyte�n�....
	Znamka zkouska(Predmet x, Znamka y); // mus� m�t spln�n� z�po�et, jinak zn�mka n (tj. -)
	Znamka zapisy(Predmet x, Znamka y); // po��t� pokusy dan�ho p�edm�tu, max 3, jinak zn�mka F

	float seznam(Prochazej next3); // proch�z� �sp�n� spln�n� zkou�ky a po��t� pr�m�r
	float prumer(); // pouze pro to, aby se (seznam) dalo volat z mainu

	//----------------------------------------------------------------------
	// Cviceni_2_5:
	//											std::string obj = typeid(*this).name();// vrac� "class Zv��e"
	string jmeno(const string jmeno2);

	//----------------------------------------------------------------------
	// Cviceni_3_4:
	//

	//----------------------------------------------------------------------
};
