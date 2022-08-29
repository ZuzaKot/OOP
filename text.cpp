#include <stdio.h>
#include <string>
#include "text.h"
#include <iostream>
#include <fstream>
using namespace std;

void Text::text(string CisloCviceni) {
	string hledane = CisloCviceni;
	string line;
	fstream f("C:\\Users\\artcr\\Documents\\B_OOP\\cviceni\\texmod_vysledek.txt", ios::in);
	if (!f) cout << "Chyba! Neslo otevrit dokument: texmod_vysledek.txt\n" << endl;
	else {
		while (getline(f, line)) {
			if ((line[0] == hledane[0]) && (line[1] == hledane[1]) && (line[2] == hledane[2])) {
				cout << "\n" << line << "\n" << endl;
				break;
			}
		}
	}
	f.close();
};