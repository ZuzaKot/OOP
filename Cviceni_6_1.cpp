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
    slon.jmeno("slon");
    slon.prsty(3);
    vrabec.jmeno("vrabec");
    vrabec.barva(Ptak::BarvaPeri::seda);
    sykora.jmeno("sykora");
    sykora.barva(Ptak::BarvaPeri::barevna);
    lin.jmeno("lin");
    lin.slanost(Ryba::SlanostVody::vubec);
    kapr.jmeno("kapr");
    kapr.slanost(Ryba::SlanostVody::vubec);


    pes.jez(1);
    slon.jez(1);
    vrabec.jez(1);
    sykora.jez(1);
    lin.jez(1);
    kapr.jez(1);
    
    pes.jez(2);
    slon.jez(3);
    vrabec.jez(2);
    sykora.jez(3);
    lin.jez(2);
    kapr.jez(3);

    pes.jez(1);
    slon.jez(1);
    vrabec.jez(1);
    sykora.jez(1);
    lin.jez(1);
    kapr.jez(1);

    pes.jez(5);
    slon.jez(5);
    vrabec.jez(5);
    sykora.jez(5);
    lin.jez(5);
    kapr.jez(5);
}

