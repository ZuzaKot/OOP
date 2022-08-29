#pragma once
#include <string>
#include "predmet.h"
#include "znamka.h"
using namespace std;

class Rocnik {
protected:
public:
	int rocnik;
	Rocnik() { rocnik; };
};

class Trida : public Rocnik {
protected:
public:
	string trida;
	Trida() { trida; };
	string vytvor(int o, string n) { this->trida = n; this->rocnik = o; return n; };
};

class Student : public Trida{
private:
	string meno;
	Predmet subject;
	Znamka mark;
public:
	Student() { meno; subject; mark; };
	//~Student() { delete& meno, subject, mark; };

	void s_name(string studentovoJmeno, Trida x) { this->meno = studentovoJmeno; this->rocnik = x.rocnik; this->trida = x.trida; };
	void score();
	void vypisRT();
	string pretypuj_mark3(Znamka zapisovanaZnamka);
	string pretypuj_subject3(Predmet zapisovanyPredmet);
	Znamka pretypuj_mark2(int cislo);
	Predmet pretypuj_subject2(int cislo);
	int pretypuj_Ch2Int(char cislo);
	char pretypuj_Int2Ch(int cislo);
	int zapisovani(Predmet zapisovanyPredmet, Znamka zapisovanaZnamka);
	int pretypuj_subject(Predmet zapisovanyPredmet);
	int pretypuj_mark(Znamka zapisovanaZnamka);
	void chyba1();
	void chyba2();
	void chyba3();
	void chyba4(); 
	void zapisZapocet();
	void zapisZkousku(); 
	int prumer();

};