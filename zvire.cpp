#include "zvire.h"
#include <string>
#include <typeinfo>
#include <iostream>
#include <fstream>
using namespace std;

//----------------------------------------------------------------------
// Cvièení 9.1:
int Zvire::save() {
	string a = this->meno;
	fstream f("C:\\Users\\artcr\\Documents\\B_OOP\\cviceni\\Cviceni_7\\saved_"+a+".txt", ios::out);
	if (!f) {
		cout << "Chyba! Neslo vytvorit dokument: saved_"<< a <<".txt\n" << endl;
		return -1;
	}
	else {
		string meno = this->meno;
		int vek = this->vek;
		int zaludek = this->zaludek;
		f << meno << "\t" << vek << "\t" << zaludek << "\n" << endl; // ukládá data do souboru
		cout << "\nSAVED:\tOk! Byl vytvoren dokument: saved_" << a << ".txt\n" << endl;
		f.close();
		return 0;
	}
};
//----------------------------------------------------------------------
// Cvièení 9.1:
int Zvire::load() {
	string a = this->meno;
	string line;
	fstream f("C:\\Users\\artcr\\Documents\\B_OOP\\cviceni\\Cviceni_7\\saved_" + a + ".txt", ios::in);
	if (!f) {
		cout << "Chyba! Neslo otevrit dokument: saved_" << a << ".txt\n" << endl;
		return -1;
	}
	else {
		while (getline(f, line)) {
			string name = line; 
			string vek = line;
			string zaludek = line;
			const char* white = "\t";
			name = name.erase(name.find_first_of(white)); // vymaže vše, co je za jménem Zvíøete (vše od \t dál)
			vek = vek.erase(0, name.length() + 1); // vymaže vše od pozice 0 do délky jména Zvíøete + \t
			vek = vek.erase(1); // vymaže vše od pozice 1
			zaludek = zaludek.erase(0, name.length() + 3); // vymaže vše kromì hodnoty žaludku Zvíøete (poslední èíslice na øádku)
				char v2 = vek[0];	// nutno pøetypovat string->char->int
				char z2 = zaludek[0];
					int v = (int)v2-48;
					int w = (int)z2-48;
			this->vek = v;		// kopíruje data ze souboru
			this->zaludek = w;	// kopíruje data ze souboru
			cout << "\nLOADED:\tZvire: "<< name << "\tvek: " << vek << "\tzaludek: " << zaludek << "\n" << endl;
			return 1;
		}
		f.close();
		return 0;
	}
};
//----------------------------------------------------------------------
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
			Zvire::stari(1 * jidlo);
			printf(" zaludek: %d\t--->\t+ jidlo: %d\t--->\tzaludek: %d| vek: %d\t|\n", zaludek, jidlo, zaludek + jidlo, vek);
		}
	}
	printf("-----------------------------------------------------------------------------------------\n");
	if (vek >= 10) {
		printf("Savec ");
		for (int i = 0; this->meno[i] != '\0'; i++) { printf("%c", this->meno[i]); }
		printf(" (pocet prstu: %x)", this->pp); 
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
			Zvire::stari(2 * jidlo);
			printf(" zaludek: %d\t--->\t+ jidlo: %d\t--->\tzaludek: %d| vek: %d\t|\n", zaludek, jidlo, zaludek + jidlo, vek);
		}
	}
	printf("-----------------------------------------------------------------------------------------\n");
	if (vek >= 10) {
		printf("Ptak ");
		for (int i = 0; this->meno[i] != '\0'; i++) { printf("%c", this->meno[i]); }
		printf(" (barva peri: %x)", this->bp); 
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
			Zvire::stari(3 * jidlo);
			printf(" zaludek: %d\t--->\t+ jidlo: %d\t--->\tzaludek: %d| vek: %d\t|\n", zaludek, jidlo, zaludek + jidlo, vek);
		}
	}
	printf("-----------------------------------------------------------------------------------------\n");
	if (vek >= 10) {
		printf("Ryba ");
		for (int i = 0; this->meno[i] != '\0'; i++) { printf("%c", this->meno[i]); }
		printf(" (slanost vody: %x)", this->sv); 
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
