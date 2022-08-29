#pragma once
#include "predmet.h"
#include "znamka.h"

struct Prochazej {
	Predmet nazev;
	Znamka hodnoceni;
	Prochazej* dalsi;
};