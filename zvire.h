#pragma once
class Zvire
{
private:
	int zaludek;
	int vek;

public:
	Zvire() { zaludek = 1; vek = 0; };

	int zije() { return zaludek > 0; };
	int jez(int jidlo);
	int vymesuj(int objem);
	int stari() { return vek += 1; };

};

