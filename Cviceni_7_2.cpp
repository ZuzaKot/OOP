// Tento zdrojový kód jsem vypracovala zcela samostatně bez cizí pomoci.
// Neokopírovala jsem, ani jsem neopsala cizí zdrojové kódy.
// Nikdo mi při vypracování neradil.
// Pokud některý řádek porušuje toto pravidlo, je označen komentářem NENÍ MOJE TVORBA.
// Porušení těchto pravidel se považuje za podvod, který lze potrestat VYLOUČENÍM ZE STUDIA.
// Zuzana Kotásková, 36777

#include <iostream>
#include "zvire.h"

int main()
{
    Savec pes, slon;
    Ptak vrabec, sykora;
    Ryba lin, kapr;

    

    pes.jmeno("pes");
    pes.prsty(4);

    pes.jez(1);
    pes.save();
    pes.jez(5);
    pes.load();
    pes.jez(1);

    slon.jmeno("slon");
    slon.prsty(3);

    slon.jez(3);
    slon.save();
    slon.jez(10);
    slon.load();
    slon.jez(2);

    
}

