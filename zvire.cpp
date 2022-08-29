#include "zvire.h"
#include <string>
using namespace std;


//----------------------------------------------------------------------
// Cviceni 6_2:
void Savec::prsty(int pocet) {
	switch (pocet) {
	case 1: this->pp = Savec::PocetPrstu::jeden;
		break;
	case 2: this->pp = Savec::PocetPrstu::dva;
		break;
	case 3: this->pp = Savec::PocetPrstu::tri;
		break;
	case 4: this->pp = Savec::PocetPrstu::ctyri;
		break;
	case 5: this->pp = Savec::PocetPrstu::pet;
		break;
	default: this->pp = Savec::PocetPrstu::pet;
	}
}
//----------------------------------------------------------------------
int Savec::jez(int jidlo) {
	if (!zije()) return 0;
	for (int i = 0; this->meno[i] != '\0'; i++) { 
		printf("%c", this->meno[i]); 
		if (this->meno[i + 1] == '\0') { 
			printf("\t| vek: %d|", vek);
			Zvire::stari(1*jidlo);
			printf(" zaludek: %d\t--->\t+ jidlo: %d\t--->\tzaludek: %d| vek: %d\t|\n", zaludek, jidlo, zaludek + jidlo, vek);
		} 
	}
	printf("-----------------------------------------------------------------------------------------\n");
	if (vek >= 10) {
		printf("Savec "); 
		for (int i = 0; this->meno[i] != '\0'; i++) {	printf("%c", this->meno[i]); }
		printf(" (pocet prstu: %x)", this->pp); // Cviceni 6.2
		printf(" uhynul ve veku %d let.\n", vek);
		printf("-----------------------------------------------------------------------------------------\n");
		return zaludek = 0;
	}
	return zaludek += jidlo;
}
//----------------------------------------------------------------------
int Ptak::jez(int jidlo) {
	if (!zije()) return 0;
	for (int i = 0; this->meno[i] != '\0'; i++) {
		printf("%c", this->meno[i]); 
		if (this->meno[i + 1] == '\0') {
			printf("\t| vek: %d|", vek);
			Zvire::stari(2*jidlo);
			printf(" zaludek: %d\t--->\t+ jidlo: %d\t--->\tzaludek: %d| vek: %d\t|\n", zaludek, jidlo, zaludek + jidlo, vek);
		}
	}
	printf("-----------------------------------------------------------------------------------------\n");
	if (vek >= 10) {
		printf("Ptak ");
		for (int i = 0; this->meno[i] != '\0'; i++) { printf("%c", this->meno[i]); }
		printf(" (barva peri: %x)", this->bp); // Cviceni 6.2
		printf(" uhynul ve veku %d let.\n", vek);
		printf("-----------------------------------------------------------------------------------------\n");
		return zaludek = 0;
	}
	return zaludek += jidlo;
}
//----------------------------------------------------------------------
int Ryba::jez(int jidlo) {
	if (!zije()) return 0;
	for (int i = 0; this->meno[i] != '\0'; i++) {
		printf("%c", this->meno[i]);
		if (this->meno[i + 1] == '\0') {
			printf("\t| vek: %d|", vek);
			Zvire::stari(3*jidlo);
			printf(" zaludek: %d\t--->\t+ jidlo: %d\t--->\tzaludek: %d| vek: %d\t|\n", zaludek, jidlo, zaludek + jidlo, vek);
		}
	}
	printf("-----------------------------------------------------------------------------------------\n");
	if (vek >= 10) {
		printf("Ryba ");
		for (int i = 0; this->meno[i] != '\0'; i++) { printf("%c", this->meno[i]); }
		printf(" (slanost vody: %x)", this->sv); // Cviceni 6.2
		printf(" uhynula ve veku %d let.\n", vek);
		printf("-----------------------------------------------------------------------------------------\n");
		return zaludek = 0;
	}
	return zaludek += jidlo;
}
//----------------------------------------------------------------------
int Zvire::vymesuj(int objem) {
	if ((zaludek -= objem) <= 0) zaludek = 0;
	return zaludek;
}
//----------------------------------------------------------------------
string Zvire::jmeno(string jmeno2) {
	string getName = jmeno2;
	/*for (int i = 0; i < getName.length(); i++) { printf("%c", getName[i]); }
	printf("\n\n");*/
	this->meno = getName;
	return getName;
}
//----------------------------------------------------------------------
