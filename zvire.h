#pragma once

class Zvire {
private:
	int zaludek;
	int vek;
public:
	struct Zviratko {
		int vek;
		int zaludek;
		//Zviratko* dalsi;
	};
	Zvire() { zaludek = 1; vek = 0; };

	Zvire(const Zvire&);            // Declare copy constructor. (@Microsoft)
	Zvire& operator=(const Zvire& x); // Declare copy assignment. (@Microsoft)

	int zije() { return zaludek > 0; };
	int jez(int jidlo);
	int vymesuj(int objem);
	int stari() { return vek += 1; };
};