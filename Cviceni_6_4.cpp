// Tento zdrojový kód jsem vypracovala zcela samostatně bez cizí pomoci.
// Neokopírovala jsem, ani jsem neopsala cizí zdrojové kódy.
// Nikdo mi při vypracování neradil.
// Pokud některý řádek porušuje toto pravidlo, je označen komentářem NENÍ MOJE TVORBA.
// Porušení těchto pravidel se považuje za podvod, který lze potrestat VYLOUČENÍM ZE STUDIA.
// Zuzana Kotásková, 36777

#include <iostream>
#include "cislo.h"

int main()
{
    Cislo* vsechnaCisla[3];
    vsechnaCisla[0] = new CeleCislo;
    vsechnaCisla[1] = new RealneCislo;
    //vsechnaCisla[2] = new KomplexniCislo;

    CeleCislo a, e, f;
    RealneCislo b;
    KomplexniCislo c, d;
    a.vytvor("A", 235);
    b.vytvor("B", 5.338468);
    c.vytvor("C", 815, 333);
    d.vytvor("D", 912, 114);

    a.get();
    a.scitej(235);
    
    b.get();
    b.scitej(265.94582);
    b.get();
    
    c.get();
    
    d.get();
    d.scitej(912, 114);
    d.get();
    //---------------------------------
    // Cviceni 7.1:
    e.vytvor("E", 1);
    f.tvor("L", 963);
    e.get();
    f.get();
}

