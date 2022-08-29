#include "komplexni_cislo.h"
#include <stdio.h>
#include <string> 
using namespace std;

//----------------------------------------------------------------------
int KomplexniC::vstup(int a, int b, string nazev_v) {
	this->x = a;
	this->y = b;
	this->nazev = nazev_v;
	printf("Vstup: \t\t");
	for (int i = 0; i < nazev_v.length(); i++) {	printf("%c", nazev_v[i]);	} // ! string je jen pole charù !!!
	printf("( %d, %d)\n", a, b);
	return 1;
};
//----------------------------------------------------------------------
int KomplexniC::scitani(KomplexniC& b) {
	KomplexniC sc1; 
		sc1.x = this->x;
		sc1.y = this->y;
		sc1.nazev = this->nazev;
	KomplexniC sc2 = b;
	int vysledek;
	int i = 1;
	vysledek = (sc1.x + sc2.x) + (sc1.y + sc2.y) * i;
	printf("\nScitani: \t");
	for (int i = 0; i < sc1.nazev.length(); i++) { printf("%c", sc1.nazev[i]); } //vypisuje název komplexního èísla
	printf("( %d, %d) + ", sc1.x, sc1.y);											// vypisuje souøadnice daného komplexního èísla
	for (int i = 0; i < sc2.nazev.length(); i++) { printf("%c", sc2.nazev[i]); }
	printf("( %d, %d) = % d\n", sc2.x, sc2.y, vysledek);
	return vysledek;
};
//----------------------------------------------------------------------
int KomplexniC::odecitani(KomplexniC& b) {
	KomplexniC sc1;
		sc1.x = this->x;
		sc1.y = this->y;
		sc1.nazev = this->nazev;
	KomplexniC sc2 = b;
	int vysledek;
	int i = 1;
	vysledek = (sc1.x - sc2.x) + (sc1.y - sc2.y) * i;
	//printf("Odecitani: %d\n", vysledek);
	//printf("Odecitani: A(%d,%d) - B(%d,%d) = %d\n", sc1.x, sc1.y, sc2.x, sc2.y, vysledek);
	printf("\nOdecitani: \t");
	for (int i = 0; i < sc1.nazev.length(); i++) { printf("%c", sc1.nazev[i]); }
	printf("( %d, %d) - ", sc1.x, sc1.y);
	for (int i = 0; i < sc2.nazev.length(); i++) { printf("%c", sc2.nazev[i]); }
	printf("( %d, %d) = % d\n", sc2.x, sc2.y, vysledek);
	return vysledek;
};
//----------------------------------------------------------------------
int KomplexniC::nasobeni(KomplexniC& b) {
	KomplexniC sc1;
		sc1.x = this->x;
		sc1.y = this->y;
		sc1.nazev = this->nazev;
	KomplexniC sc2 = b;
	int vysledek;
	int i = 1;
	vysledek = ((sc1.x * sc2.x + sc1.y * sc2.y) / (sc2.x * sc2.x + sc2.y * sc2.y)) + ((sc1.y * sc2.x - sc1.x * sc2.y) / (sc2.x * sc2.x + sc2.y * sc2.y)) * i;
	//printf("Nasobeni: %d\n", vysledek);
	//printf("Nasobeni: A(%d,%d) * B(%d,%d) = %d\n", sc1.x, sc1.y, sc2.x, sc2.y, vysledek);
	printf("\nNasobeni: \t");
	for (int i = 0; i < sc1.nazev.length(); i++) { printf("%c", sc1.nazev[i]); }
	printf("( %d, %d) * ", sc1.x, sc1.y);
	for (int i = 0; i < sc2.nazev.length(); i++) { printf("%c", sc2.nazev[i]); }
	printf("( %d, %d) = % d\n", sc2.x, sc2.y, vysledek);
	return vysledek;
};
//----------------------------------------------------------------------
int KomplexniC::Op(char a, KomplexniC& b) {
	char n = a;
	int i = 0;
	switch (n) {
	case '+':
		i = KomplexniC::scitani(b);
		break;
	case '-':
		i = KomplexniC::odecitani(b);
		break;
	case '*':
		i = KomplexniC::nasobeni(b);
		break;
	default:
		i = KomplexniC::scitani(b);
	}
	return i;
};
//----------------------------------------------------------------------