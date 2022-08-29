#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include "student.h"
using namespace std;

void Student::vypisRT(){
	int rocnik = this->rocnik;
	string trida = this->trida;
	cout << "Rocnik: " << rocnik << "\tTrida: " << trida << endl;
}

int Student::prumer() {
	string meno = this->meno;
	fstream a("C:\\Users\\artcr\\Documents\\B_OOP\\cviceni\\Dalsi_civiceni\\saved_" + meno + ".txt", ios::in);
	if (a) {
		string line;
		cout << "\nPrumer studenta " << meno << ":\t";
		float soucet = 0.0;
		int pocet = 0;
		while (getline(a, line)) { // cte ze souboru po radcich
			if (line[0] != '\0') {
				string predmet = line;
				string znamka = line;
				predmet = predmet.erase(predmet.find_first_of("\t"));
				znamka = znamka.erase(0, predmet.length() + 1); 
				int z2 = Student::pretypuj_Ch2Int(znamka[0]);
				float z3 = 0;
				if ((z2 != 0) && (z2 != 7)) {
					switch (z2) {
					case 1: z3 = 1.0; break;
					case 2: z3 = 1.5; break;
					case 3: z3 = 2.0; break;
					case 4: z3 = 2.5; break;
					case 5: z3 = 3.0; break;
					case 6: z3 = 4.0; break;
					}
					soucet += z3;
					pocet++;
				}
			}
			else break;
		}
		float prumer = 0.0;
		if ((soucet>0) && (pocet> 0)) {
			prumer = soucet / pocet;
		}		
		cout << prumer << endl;
	}
	else {
		cout << "\nChyba! Nepovedlo se otevit soubor saved_" << meno << ".txt ke cteni (prumer znamek)." << endl;
		return -1;
	}
	a.close();
	return 0;
};
// Ooooooooooujeeeeeeeeeeeeeeeeeeeeee!!! :-D
void Student::score() { 
	string meno = this->meno;
	fstream a("C:\\Users\\artcr\\Documents\\B_OOP\\cviceni\\Dalsi_civiceni\\saved_" + meno + ".txt", ios::in);
	if (a) {
		string line;
		cout << "\n________________________________________________"<< endl;
		Student::vypisRT();
		cout<< "\nScore studenta " << meno << ":\n\nINDEX" << endl;
		while (getline(a, line)) { // cte ze souboru po radcich
			if (line[0] != '\0') {
				string predmet = line;
				string znamka = line;
				predmet = predmet.erase(predmet.find_first_of("\t")); // predmet je charakterizovan v souboru jako prvni cislice
				znamka = znamka.erase(0, predmet.length() + 1); // znamka je v souboru jako druha cislice na radku
				// pretypovavani predmetu a znamek -> kvuli vystupu na obrazovku
				int p2 = Student::pretypuj_Ch2Int(predmet[0]);
				int z2 = Student::pretypuj_Ch2Int(znamka[0]);
				Znamka zn = Student::pretypuj_mark2(z2);
				Predmet pr = Student::pretypuj_subject2(p2);
				string znamka_out = Student::pretypuj_mark3(zn);
				string predmet_out = Student::pretypuj_subject3(pr);
				
				cout << "Predmet:\t" << predmet_out << "\tZnamka:\t" << znamka_out << endl;
			}
			else break;
		}
	}
	else {
		cout << "\nChyba! Nepovedlo se otevit soubor saved_" << meno << ".txt ke cteni." << endl;
	}
	a.close();
	Student::prumer();
};

void Student::chyba1() {
	string predmet = Student::pretypuj_subject3(this->subject);
	string znamka = Student::pretypuj_mark3(this->mark);
	string jmeno = this->meno;
	cout << "Nelze zapsat znamku '" << znamka << "' studentovi " << jmeno << " z predmetu '" << predmet << "'. K predmetu dosud nebyl udelen zapocet." << endl;
}
void Student::chyba2() {
	string predmet = Student::pretypuj_subject3(this->subject);
	string znamka = Student::pretypuj_mark3(this->mark);
	string jmeno = this->meno;
	cout << "Nelze zapsat zapocet (znamka '" << znamka << "') studentovi " << jmeno << " z predmetu '" << predmet << "'. Zapocet byl jiz udelen." << endl;
}
void Student::chyba3() {
	string predmet = Student::pretypuj_subject3(this->subject);
	string znamka = Student::pretypuj_mark3(this->mark);
	string jmeno = this->meno;
	cout << "Nelze zapsat znamku '" << znamka << "' studentovi " << jmeno << " z predmetu '" << predmet << "'. Byl dosazen maximalni limit." << endl;
}
void Student::chyba4() {
	string predmet = Student::pretypuj_subject3(this->subject);
	string znamka = Student::pretypuj_mark3(this->mark);
	string jmeno = this->meno;
	cout << "Nelze zapsat znamku '" << znamka << "' studentovi " << jmeno << " z predmetu '" << predmet << "'. Tato zkouska jiz byla zapsana." << endl;
}

string Student::pretypuj_mark3(Znamka zapisovanaZnamka) {
	Znamka mar = zapisovanaZnamka;
	string mar2; 
	switch (mar) {
	case Znamka::z: mar2 = "z"; break;
	case Znamka::A: mar2 = "A"; break;
	case Znamka::B: mar2 = "B"; break;
	case Znamka::C: mar2 = "C"; break;
	case Znamka::D: mar2 = "D"; break;
	case Znamka::E: mar2 = "E"; break;
	case Znamka::F: mar2 = "F"; break;
	case Znamka::n: mar2 = "n"; break;
	}
	return mar2;
}

string Student::pretypuj_subject3(Predmet zapisovanyPredmet) {
	Predmet sub = zapisovanyPredmet;
	string sub2; 
	switch (sub) {
	case Predmet::AJ_4: sub2 = "AJ_4"; break;
	case Predmet::BI: sub2 = "BI"; break;
	case Predmet::BS: sub2 = "BS"; break;
	case Predmet::OOP: sub2 = "OOP"; break;
	case Predmet::Pr_W2: sub2 = "Pr_W2"; break;
	case Predmet::VIMA: sub2 = "VIMA"; break;
	}
	return sub2;
}

void Student::zapisZapocet() {
	string stud_jmeno = this->meno;
	int p = Student::pretypuj_subject(this->subject);
	int z = Student::pretypuj_mark(this->mark);
	string p2 = Student::pretypuj_subject3(this->subject);
	string z2 = Student::pretypuj_mark3(this->mark);
	fstream soubor("C:\\Users\\artcr\\Documents\\B_OOP\\cviceni\\Dalsi_civiceni\\saved_" + stud_jmeno + ".txt", fstream::app | fstream::out);
	soubor << p << "\t" << z << endl;
	cout << "Byl udelen zapocet '" << z2 << "' studentovi " << stud_jmeno << " z predmetu '" << p2 << "'." << endl;
	soubor.close();
}

void Student::zapisZkousku() {
	string stud_jmeno = this->meno;
	int p = Student::pretypuj_subject(this->subject);
	int z = Student::pretypuj_mark(this->mark);
	string p2 = Student::pretypuj_subject3(this->subject);
	string z2 = Student::pretypuj_mark3(this->mark);
	fstream soubor("C:\\Users\\artcr\\Documents\\B_OOP\\cviceni\\Dalsi_civiceni\\saved_" + stud_jmeno + ".txt", fstream::app | fstream::out);
	soubor << p << "\t" << z << endl;
	cout << "Bylo udeleno hodnoceni '" << z2 << "' studentovi " << stud_jmeno << " ze zkousky z predmetu '" << p2 << "'." << endl;
	soubor.close();

}

Znamka Student::pretypuj_mark2(int cislo) {
	Znamka x = (Znamka)cislo;
	return x;
}

Predmet Student::pretypuj_subject2(int cislo) {
	Predmet x = (Predmet)cislo;
	return x;
}

int Student::pretypuj_Ch2Int(char cislo) {
	int a = (int)cislo - 48;
	return a;
}

char Student::pretypuj_Int2Ch(int cislo) {
	char a = (char)(cislo+48);
	return a;
}

int Student::pretypuj_subject(Predmet zapisovanyPredmet) {
	int a = (int)zapisovanyPredmet;
	return a;
}

int Student::pretypuj_mark(Znamka zapisovanaZnamka) {
	int a = (int)zapisovanaZnamka;
	return a;
}

int Student::zapisovani(Predmet zapisovanyPredmet, Znamka zapisovanaZnamka) {
	this->subject = zapisovanyPredmet;
	this->mark = zapisovanaZnamka;

	string stud_jmeno = this->meno;
	int zap_sub = Student::pretypuj_subject(zapisovanyPredmet); // cislo jako index enumu
	int zap_mar = Student::pretypuj_mark(zapisovanaZnamka);

	char z_sub = Student::pretypuj_Int2Ch(zap_sub); // cislo, ale jako znak
	char z_mar = Student::pretypuj_Int2Ch(zap_mar); // ............-> pro porovnavani se stringem ze souboru

	int pokus_sub = Student::pretypuj_Ch2Int(z_sub); // cislo jako hodnota
	int pokus_mar = Student::pretypuj_Ch2Int(z_mar);

	Predmet pokus_sub2 = Student::pretypuj_subject2(pokus_sub); // hodnota enumu
	Znamka pokus_mar2 = Student::pretypuj_mark2(pokus_mar);

	fstream soubor("C:\\Users\\artcr\\Documents\\B_OOP\\cviceni\\Dalsi_civiceni\\saved_" + stud_jmeno + ".txt", ios::in);
	
	bool E_predmet = false;
	bool E_zapocet = false;
	bool E_zkouska = false;
	int x = 0;
	string posledniZkouska;
	string line;
	// projde soubor a hleda shody...
	while (getline(soubor, line)) {
		if (line[0] != '\0') {
			string predmet = line;
			string znamka = line;
			predmet = predmet.erase(predmet.find_first_of("\t"));
			znamka = znamka.erase(0, predmet.length() + 1);
			if (predmet[0] == z_sub) {
				E_predmet = true;
				if (znamka[0] == Student::pretypuj_Int2Ch(0)) E_zapocet = true;
				else {
					posledniZkouska = znamka;
					x++;
					E_zkouska = true;
				}
			}
		}
		else break;
	}
	soubor.close();
	// algoritmus udelovani zapoctu, zkousek a generovani chyb
	if (E_predmet) {
		if (E_zapocet) {
			if (zap_mar == 0)Student::chyba2();
			else {
				if (E_zkouska) {
					if (posledniZkouska[0] == z_mar)Student::chyba4();
					else {
						if (x < 3)Student::zapisZkousku();
						else Student::chyba3();
					}
				}
				else Student::zapisZkousku();
			}
		}
		else Student::chyba1();
	}
	else {
		if (zap_mar == 0)Student::zapisZapocet();
		else Student::chyba1();
	}

	return 0;
}

/*
algoritmus jako flowchart:


Ex soubor? -NE-> VYTVOR SOUBOR
   '-ANO-> Ex predmet? -NE-> chci zapsat zapocet? -ANO-> ZAPIS ZAPOCET
				|                            '-NE-> CHYBA!(Nejprve je potreba zapocet)
				'-ANO-> Ex zapocet? -----------NE-->'
							'-ANO-> chci zapsat zapocet? -ANO-> CHYBA!(Zapocet uz byl udelen)
													'-NE-> Ex zkouska? -NE-> ZAPIS ZKOUSKU <------------------ANO---,
															   |                x++                                 |
															   |                                            ,-NE-> x<=3? -NE->  -ANO-> CHYBA!(Dosazen maximalni limit)
															   '-ANO-> chci zapsat stejnou známku, jako je poslední? -ANO-> CHYBA!(Zkouska uz byla zapsana)


*/
