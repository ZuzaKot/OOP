// Tento zdrojový kód jsem vypracovala zcela samostatně bez cizí pomoci.
// Neokopírovala jsem, ani jsem neopsala cizí zdrojové kódy.
// Nikdo mi při vypracování neradil.
// Pokud některý řádek porušuje toto pravidlo, je označen komentářem NENÍ MOJE TVORBA.
// Porušení těchto pravidel se považuje za podvod, který lze potrestat VYLOUČENÍM ZE STUDIA.
// Zuzana Kotásková, 36777

#include <iostream>
#include "sort_min.h"

int main()
{
    Sort_min X, Y, Z;
    int A = 13;
    int B = 62;
    int C = 8;
    int D = 105;
    int E = 51;
    X.sortMin(A, B, C);
    Y.sortMin(C, A, B);
    Z.sortMin(D, E, B);
}
