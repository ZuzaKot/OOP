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

	Student() { subject; mark; zapis = 0; zapoctu = 0; zkousek = 0; meno; }; // uchovává ke každému studentovi pøedmìt, známku a poèet pokusù

	//----------------------------------------------------------------------
	// Cviceni_2_4:
	//Student(const Student&);            // Declare copy constructor. (@Microsoft)
	//Student& operator=(const Student& x); // Declare copy assignment. (@Microsoft)

	//----------------------------------------------------------------------

	Prochazej nextik = Prochazej(); // sem se ukládají hotové zápoèty a zkoušky studenta
	Prochazej novy(Predmet x, Znamka y); // pouze pro úplnì první zkoušku (zaèátek lineárního seznamu)
	Prochazej novy2(Predmet x, Znamka y, Prochazej next2); // pro druhou a další zkoušku
	Znamka zapocet(Predmet x); // zapíše k pøedmìtu zápoèet, známka z
	int maZapocet() { return zapoctu += 1; }; // možná zbyteèné....
	int maZkousek() { return zkousek += 1; }; // možná zbyteèné....
	Znamka zkouska(Predmet x, Znamka y); // musí mít splnìný zápoèet, jinak známka n (tj. -)
	Znamka zapisy(Predmet x, Znamka y); // poèítá pokusy daného pøedmìtu, max 3, jinak známka F

	float seznam(Prochazej next3); // prochází úspìšnì splnìné zkoušky a poèítá prùmìr
	float prumer(); // pouze pro to, aby se (seznam) dalo volat z mainu

	//----------------------------------------------------------------------
	// Cviceni_2_5:
	//											std::string obj = typeid(*this).name();// vrací "class Zvíøe"
	string jmeno(const string jmeno2);

	//----------------------------------------------------------------------
	// Cviceni_3_4:
	//

	//----------------------------------------------------------------------
};

