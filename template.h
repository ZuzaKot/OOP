#pragma once
#pragma once
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include "vector"
using namespace std;
// ROZDÌLANÉ....ZATÍM VYHAZUJE CHYBY (pøeteèení)....

template <class T>
class BinarniStrom {
	vector<T> v; // do gumového pole se ukládají hodnoty
	T hodnota;/* = v[i];*/
	T otec;/* = v[i / 2];*/
	T Lsyn;/* = v[2 * i];*/
	T Psyn;/* = v[2 * i + 1];*/
public:
	BinarniStrom() { hodnota; otec; Lsyn; Psyn; };
	void pridej(T x) {
		hodnota = x;
		v.push_back(hodnota);
	};
	void cti() {
		int j = 0;
		for (j; j < v.size(); j++) { // ještì poøešit pøeteèení pole
			hodnota = v[j];
			cout << "Index[" << j << "]\tHodnota[" << hodnota << "]";
			if (j > 0) {
				otec = v[j / 2];
				if (v[(2 * j)+1]) {
					Lsyn = v[(2 * j)+1];
					if (v[(2 * j) + 2]) {
						Psyn = v[(2 * j) + 2];
					}
					else Psyn = NULL;
				}
				else Lsyn = Psyn = NULL;
				cout << "\tLevy syn: [" << (2 * j) + 1 << "] hodnota = " << v[(2 * j) + 1] << "\tPravy syn: [" << (2 * j) + 2 << "] hodnota = " << v[(2 * j) + 2] << "\tOtec: [" << ((j - 1) / 2) << "] hodnota = " << v[((j - 1) / 2)] << endl;
			}
			else {
				Lsyn = v[1];
				Psyn = v[2];
				cout << "\tLevy syn: [" << 1 << "] hodnota = " << v[1] << "\tPravy syn: [" << 2 << "] hodnota = " << v[2] << endl;
			}
		}
		if (j == v.size()) cout << "Vse..." << endl;
	};
};

