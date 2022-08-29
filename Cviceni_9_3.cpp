// Tento zdrojový kód jsem vypracovala zcela samostatně bez cizí pomoci.
// Neokopírovala jsem, ani jsem neopsala cizí zdrojové kódy.
// Nikdo mi při vypracování neradil.
// Pokud některý řádek porušuje toto pravidlo, je označen komentářem NENÍ MOJE TVORBA.
// Porušení těchto pravidel se považuje za podvod, který lze potrestat VYLOUČENÍM ZE STUDIA.
// Zuzana Kotásková, 36777

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include "text.h"
#include "template.h"
#include "vector"
using namespace std;

int main()
{
	Text Cviceni;
	Cviceni.text("9.3");
	
	/*GumovePole<int> A;
	A.pridej(5);
	A.pridej(7);
	A.pridej(9);
	A.vypis();*/

	/*GumovePole<string> B;
	B.pridej("Ahoj");
	B.pridej("Cau");
	B.pridej("Dobry den");
	B.vypis();*/

	GumovePole<char> C;
	C.pridej('X');
	C.pridej('Y');
	C.pridej('Z');
	C.vypis();
}