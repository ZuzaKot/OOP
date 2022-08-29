// Tento zdrojový kód jsem vypracovala zcela samostatně bez cizí pomoci.
// Neokopírovala jsem, ani jsem neopsala cizí zdrojové kódy.
// Nikdo mi při vypracování neradil.
// Pokud některý řádek porušuje toto pravidlo, je označen komentářem NENÍ MOJE TVORBA.
// Porušení těchto pravidel se považuje za podvod, který lze potrestat VYLOUČENÍM ZE STUDIA.
// Zuzana Kotásková, 36777

#include <iostream>
#include "LongInt.h"

int main()
{
    LongInt a, b, c;
    a.dopln(pow(5,10)); // doplní hodnotu do "a" 
    b.dopln(pow(12,8));
    c.dopln(pow(7, 6));

    a.operator=(b); // copy()
    a.operator=(c); // 
    a.operator+(b); // 
    b.operator+(a); // 
    a.clear();      // clear()
    b.clear();
    c.clear();

    //------------------------------------------------------------------
    // Cviceni 5.4
    a.dopln(pow(3, 5));
    b.dopln(pow(4, 4));
    c.dopln(pow(6, 3));
    LongInt d;

    d.operator=(a);         // d.copy(a);
    d.operator+(a);
    d.operator+=(a);

    a.operator!=(d);
    a.operator==(d);

}