#pragma once
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include "vector"
using namespace std;

template <class T>
class GumovePole {
	vector<T> hodnota;
public:
	GumovePole() { hodnota; };
	void pridej(T a) {
		//cout << "Puvodni velikost gumoveho pole = " << hodnota.size() << endl;
		hodnota.push_back(a);
		cout << "Hodnota: " << a << " byla vlozena." << endl;
		//cout << "Aktualni velikost gumoveho pole = " << hodnota.size() << endl;
	};
	void vypis(){
		int j, i = 0;
		for (j = 0; j < hodnota.size(); j++) {
			i++;
			cout << i << ". ulozena hodnota = " << hodnota[j] << endl;
		}

	};
};