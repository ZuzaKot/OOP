#include <typeinfo>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include "student.h"
#include "seznam.h"
using namespace std;

//----------------------------------------------------------------------
int Student::save() {
	string a = this->meno;
	fstream f("C:\\Users\\artcr\\Documents\\B_OOP\\cviceni\\Cviceni_9\\saved_" + a + ".txt", ios::out);
	if (!f) {
		cout << "Chyba! Neslo vytvorit dokument: saved_" << a << ".txt\n" << endl;
		return -1;
	}
	else {
		int subject_save = (int&)this->subject; // vypisuje index prvku ve výètu hodnot (Pøedmìtù)
		int mark_save = (int&)this->mark; // vypisuje index prvku ve výètu hodnot (Známek)
		int zapis_save = this->zapis;
		int zkousek_save = this->zkousek;
		int zapoctu_save = this->zapoctu;
		string meno_save = this->meno;

		f << meno_save << "\t" << subject_save << "\t" << mark_save << "\t" << zapoctu_save << "\t" << zkousek_save << "\t" << zapis_save << "\n" << endl; // ukládá data do souboru
		cout << "SAVED:\tOk! Byl vytvoren dokument: saved_" << meno_save << ".txt\n" << endl;
		f.close();
		return 0;
	}
};
//----------------------------------------------------------------------
int Student::load() {
	string a = this->meno;
	string line;
	fstream f("C:\\Users\\artcr\\Documents\\B_OOP\\cviceni\\Cviceni_9\\saved_" + a + ".txt", ios::in);
	if (!f) {
		cout << "Chyba! Neslo otevrit dokument: saved_" << a << ".txt\n" << endl;
		return -1;
	}
	else {
		while (getline(f, line)) {
			string meno_load = line;
			string subject_load = line;
			string mark_load = line;
			string zapoctu_load = line;
			string zkousek_load = line;
			string zapis_load = line;
			meno_load = meno_load.erase(meno_load.find_first_of("\t"));
			subject_load = subject_load.erase(0, meno_load.length() + 1);
			subject_load = subject_load.erase(1);
			mark_load = mark_load.erase(0, meno_load.length() + 3);
			mark_load = mark_load.erase(1);
			zapoctu_load = zapoctu_load.erase(0, meno_load.length() + 5);
			zapoctu_load = zapoctu_load.erase(1);
			zkousek_load = zkousek_load.erase(0, meno_load.length() + 7);
			zkousek_load = zkousek_load.erase(1);
			zapis_load = zapis_load.erase(0, meno_load.length() + 9);
			zapis_load = zapis_load.erase(1);

			Predmet sub;
			if (subject_load == "4")sub = Predmet::AJ_4;
			if (subject_load == "1")sub = Predmet::BI;
			if (subject_load == "2")sub = Predmet::BS;
			if (subject_load == "0")sub = Predmet::OOP;
			if (subject_load == "3")sub = Predmet::Pr_W2;
			if (subject_load == "5")sub = Predmet::VIMA;

			string sub2; // jenom kvùli výpisu do konzole
			switch (sub) {
			case Predmet::AJ_4: sub2 = "AJ_4"; break;
			case Predmet::BI: sub2 = "BI"; break;
			case Predmet::BS: sub2 = "BS"; break;
			case Predmet::OOP: sub2 = "OOP"; break;
			case Predmet::Pr_W2: sub2 = "Pr_W2"; break;
			case Predmet::VIMA: sub2 = "VIMA"; break;
			}

			Znamka mar;
			if (mark_load == "0")mar = Znamka::z;
			if (mark_load == "1")mar = Znamka::A;
			if (mark_load == "2")mar = Znamka::B;
			if (mark_load == "3")mar = Znamka::C;
			if (mark_load == "4")mar = Znamka::D;
			if (mark_load == "5")mar = Znamka::E;
			if (mark_load == "6")mar = Znamka::F;
			if (mark_load == "7")mar = Znamka::n;

			string mar2; // jenom kvùli výpisu do konzole
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

			int zapi = (int)(char)zapis_load[0] - 48;
			int zapo = (int)(char)zapoctu_load[0] - 48;
			int zkou = (int)(char)zkousek_load[0] - 48;


			this->subject = sub;
			this->mark = mar;
			this->zapis = zapi;
			this->zapoctu = zapo;
			this->zkousek = zkou;// kopíruje data ze souboru
			
			cout << "LOADED:\tStudent: " << meno_load << "\tpredmet: " << sub2 << "\tznamka: " << mar2 << "\tzapoctu celkem: " << zapo << "\tzkousek celkem: " << zkou << "\tzapisu celkem: " << zapi << "\n" << endl; 
			return 1;
		}
		f.close();
		return 0;
	}
};
//----------------------------------------------------------------------

Znamka Student::zapocet(Predmet x) {
	subject = x;
	mark = Znamka::z;
	Student::maZapocet();
	return mark;
};
//-------------------------------------------------------------------------------
Znamka Student::zkouska(Predmet x, Znamka y) {
	if (mark != Znamka::z) return Znamka::n;
	else mark = y;
	subject = x;
	Student::zapisy(x, y);
	if (zapis == 1) {
		nextik = Student::novy(x, y); // vytváøí lineární spojový seznam
	}
	else {
		nextik = Student::novy2(x, y, nextik);	// pøidává do lineárního spojového seznamu
	};
	Student::maZkousek();
	return mark;
};
//-------------------------------------------------------------------------------
Znamka Student::zapisy(Predmet x, Znamka y) {
	if ((subject != x) || (zapis < 20)) {
		zapis += 1;
		return mark = y;
	}
	else return mark = Znamka::F;
};
//-------------------------------------------------------------------------------
Prochazej Student::novy(Predmet x, Znamka y) {
	Prochazej novy1 = Prochazej();
	Prochazej next1 = Prochazej(); // naèítá pøedposlední uložené hodnoty (pøedmìt a známku).... <- chtìlo by zjistit proè
	novy1.nazev = x;
	novy1.hodnoceni = y;
	novy1.dalsi = new Prochazej;
	novy1.dalsi->nazev = next1.nazev;
	novy1.dalsi->hodnoceni = next1.hodnoceni;
	return novy1;
};
//-------------------------------------------------------------------------------
Prochazej Student::novy2(Predmet x, Znamka y, Prochazej nextik) {
	Prochazej novy2 = Prochazej();
	Prochazej next2 = nextik;
	novy2.nazev = x;
	novy2.hodnoceni = y;
	novy2.dalsi = new Prochazej;
	*novy2.dalsi = next2;
	return novy2;
};
//-------------------------------------------------------------------------------
float Student::seznam(Prochazej next3) {
	float a = 0.0;
	int i = 0;

	while (Student::nextik.dalsi != nullptr) {
		if (Student::nextik.hodnoceni != Znamka::z) {
			if (Student::nextik.hodnoceni == Znamka::A) a += 1.0;
			if (Student::nextik.hodnoceni == Znamka::B) a += 1.5;
			if (Student::nextik.hodnoceni == Znamka::C) a += 2.0;
			if (Student::nextik.hodnoceni == Znamka::D) a += 2.5;
			if (Student::nextik.hodnoceni == Znamka::E) a += 3.0;
			if (Student::nextik.hodnoceni == Znamka::F) a += 4.0;
			if (Student::nextik.hodnoceni == Znamka::n) a += 0.0;
			i += 1;
			if (Student::nextik.dalsi != nullptr)Student::nextik = *Student::nextik.dalsi;
		}
		else break;
	}
	return a / i;
};
//-------------------------------------------------------------------------------
float Student::prumer() {
	if (Student::nextik.dalsi != nullptr) {
		return seznam(Student::nextik);
	}
	else return 0.0;
};
//-------------------------------------------------------------------------------

//----------------------------------------------------------------------
// Cviceni_2_5:
string Student::jmeno(string jmeno2) {
	string getName = jmeno2;
	for (int i = 0; i < getName.length(); i++) { printf("%c", getName[i]); }
	printf("\n\n");
	this->meno = getName;
	return getName;
}
//----------------------------------------------------------------------
