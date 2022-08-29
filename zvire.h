#pragma once
#include <string>
#include <typeinfo>
using namespace std;

class Zvire {
private:
	int zaludek;
	int vek;
	string meno;// Cviceni_2_5:
public:
	struct Zviratko {
		int vek;
		int zaludek;
		string meno;
		//Zviratko* dalsi;
	};

	Zvire() { zaludek = 1; vek = 0; meno; };

	//----------------------------------------------------------------------
	// Cviceni_2_4: (Cviceni_3_5:)
	//Zvire(const Zvire&);            // Declare copy constructor. (@Microsoft)
	//Zvire& operator=(const Zvire& x); // Declare copy assignment. (@Microsoft)

	//----------------------------------------------------------------------
	int zije() { return zaludek > 0; };
	int jez(int jidlo);
	int vymesuj(int objem);
	int stari() { return vek += 1; };


	//----------------------------------------------------------------------
	// Cviceni_2_5:
	//											std::string obj = typeid(*this).name();// vrací "class Zvíøe"
	string jmeno(const string jmeno2);

	//----------------------------------------------------------------------
};