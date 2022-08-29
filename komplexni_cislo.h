#pragma once
#include <string>
using namespace std;

class KomplexniC {
private:
	int x;
	int y;
	string nazev;
public:
	KomplexniC() { x = 1; y = 1; }; // pro pøípad, že by vstup nebyl úplný

	int vstup(int a, int b, string nazev);
	
	int scitani(KomplexniC& b);
	int odecitani(KomplexniC& b);
	int nasobeni(KomplexniC& b);// nevím, zda to vychází poèetnì správnì

	//----------------------------------------------------------------------	
	// Cviceni_3_2:
	int getX() { return x; };				// slide "Udržovatelnost kódu", autor: doc. Lánský
	int getY() { return y; };				//
	void setX(int x) { this->x = x; };		//
	void setY(int y) { this->y = y; };		//
	//----------------------------------------------------------------------
	// Cviceni_3_3:
	int Op(char a, KomplexniC& b); // a={'+','-','*'}

	//KomplexniC(const KomplexniC&);            // Declare copy constructor. (@Microsoft)
	//KomplexniC& operator=(const KomplexniC& x); // Declare copy assignment. (@Microsoft)
	//----------------------------------------------------------------------
	
};
