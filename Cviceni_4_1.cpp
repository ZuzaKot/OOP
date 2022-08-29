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
    Str a, b;
    a.dopln("Aah"); // doplní hodnotu do "a"
    b.dopln("Beh");

    a.operator=(b); // hodnota "a" se přepíše na hodnotu "b"
    a.dopln("Aah");
    b.operator=(a); // hodnota "b" se přepíše na hodnotu "a"
    a.operator+(b); // k hodnotě "a" se připojí hodnota "b"
    b.operator+(a); // k hodnotě "b" se připojí hodnota "a"

    //------------------------------------------------------------------
    // Cviceni 5.6														
    a.operator<=(b);
    a.operator>=(b);
    a.operator==(a);
    a.operator!=(a);
}