// Tento zdrojový kód jsem vypracovala zcela samostatně bez cizí pomoci.
// Neokopírovala jsem, ani jsem neopsala cizí zdrojové kódy.
// Nikdo mi při vypracování neradil.
// Pokud některý řádek porušuje toto pravidlo, je označen komentářem NENÍ MOJE TVORBA.
// Porušení těchto pravidel se považuje za podvod, který lze potrestat VYLOUČENÍM ZE STUDIA.
// Zuzana Kotásková, 36777

#include <iostream>
#include "Str.h"

int main()
{
    Str_child f;
    string a = "Les", b = "Pole", c = "Moře", d = "Oceán";
    string a1 = "lES", b1 = "pOLE", c1 = "mOŘE", d1 = "oCEÁN";
    string a2 = "Lesik", b2 = "Poledne", c2 = "Mořeplavec", d2 = "Oceánie";
    
    f.shodnost(a, a);
    f.shodnost(a, a1);
    f.shodnost(a, a2);

    f.shodnost("AahAah", "aAHaAH");
    f.shodnost("Vcera Byl NOVY rok", "vCERA byl novy ROK");
    f.shodnost("berber", "BERBER");
    f.shodnost("BerBer", "BerBerk");
    f.shodnost("CeeC", "CeeS");
}