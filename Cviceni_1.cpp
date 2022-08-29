// Tento zdrojový kód jsem vypracovala zcela samostatně bez cizí pomoci.
// Neokopírovala jsem, ani jsem neopsala cizí zdrojové kódy.
// Nikdo mi při vypracování neradil.
// Pokud některý řádek porušuje toto pravidlo, je označen komentářem NENÍ MOJE TVORBA.
// Porušení těchto pravidel se považuje za podvod, který lze potrestat VYLOUČENÍM ZE STUDIA.
// Zuzana Kotásková, 36777

#include <iostream>
#include "zvire.h"

int main()          // Cviceni1: 1) a 3), 2)(nelze, vyvolá chybu)
{
    Zvire pytlik, beruska;
    pytlik.jez(5);
    beruska.jez(1);
    pytlik.vymesuj(3);
    if (!pytlik.zije())return -1;
    beruska.jez(5);
    pytlik.jez(5);
    pytlik.vymesuj(4);
    if (!pytlik.jez(1))return -2;
}

