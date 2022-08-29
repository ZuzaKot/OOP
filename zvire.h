#pragma once
#include <string>
using namespace std;

class Zvire {
protected:
	int zaludek;
	int vek;
	string meno;
public:
	Zvire() { zaludek = 1; vek = 0; meno; };

	int zije() { return zaludek > 0; };
	int stari(int zestarnuti) { return vek += zestarnuti; };
	int vymesuj(int objem);
	string jmeno(const string jmeno2);	
};

class Savec : public Zvire {
private:
public:
	//----------------------------------------------------------------------
	// Cviceni 6_2:
	enum class PocetPrstu {	jeden = 1, dva = 2, tri = 3, ctyri = 4, pet = 5	};
	PocetPrstu pp;
	//----------------------------------------------------------------------
	Savec() { pp; };
	int jez(int jidlo);
	void prsty(int pocet);
};

class Ptak : public Zvire {
private:
public:
	//----------------------------------------------------------------------
	// Cviceni 6_2:
	enum class BarvaPeri { bila, seda, cerna, barevna };
	BarvaPeri bp;
	//----------------------------------------------------------------------
	Ptak() { bp; };
	int jez(int jidlo);
	void barva(BarvaPeri odstin) { bp = odstin; };
};

class Ryba : public Zvire {
private:
public:
	//----------------------------------------------------------------------
	// Cviceni 6_2:
	enum class SlanostVody {	vubec, malo, stredne, vice, naprosto	};
	SlanostVody sv;
	//----------------------------------------------------------------------
	Ryba() { sv; };
	int jez(int jidlo);
	void slanost(SlanostVody mnozstvi) { sv = mnozstvi; };
};