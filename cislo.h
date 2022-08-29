#pragma once
#include <string>
using namespace std;
class Cislo
{
protected:
	string name;
public:
	Cislo() { name; };
	//~Cislo() { delete &value; };	
};

class CeleCislo :public Cislo {
private:
	int value;
public:
	CeleCislo() { value = 0; };
	int vytvor(string nazevHodnoty, int vstupniHodnota);
	int get();
	int scitej(int b);
	virtual void tvor(string nazevH, int vstupH);									// virtuální fce (Cvièení 7.1)
};

class KomplexniCislo : CeleCislo {
private:
	int value_x;
	int value_y;
public:
	KomplexniCislo() { value_x = 0; value_y = 0; };
	int vytvor(string nazevHodnoty, int vstupniHodnota_a, int vstupniHodnota_b);
	int get();
	int scitej(int a, int b);
	virtual void tvor(string nazevH, int vstupniH_a, int vstupniH_b);				// virtuální fce (Cvièení 7.1)
};

class RealneCislo :public Cislo {
private:
	float value;
public:
	RealneCislo() { value = 0.0; };
	int vytvor(string nazevHodnoty, float vstupniHodnota);
	int get();
	int scitej(float b);
	virtual void tvor(string nazevH, float vstupH);									// virtuální fce (Cvièení 7.1)
};
