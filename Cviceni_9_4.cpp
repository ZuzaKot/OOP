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
using namespace std;
// ROZDĚLANÉ....ZATÍM VYHAZUJE CHYBY (přetečení)....

int main()
{ 
	Text Cviceni;
	Cviceni.text("9.4");
	//******************

	/*BinarniStrom<int> BS;
	BS.pridej(5);
	BS.pridej(8);
	BS.pridej(7);
	BS.pridej(9);
	BS.pridej(1);
	BS.pridej(2);
	BS.cti();*/

	BinarniStrom<char> BS2;
	BS2.pridej('A');
	BS2.pridej('B');
	BS2.pridej('C');
	BS2.pridej('D');
	BS2.pridej('E');
	BS2.pridej('F');
	BS2.pridej('G');
	BS2.pridej('H');
	BS2.pridej('I');
	BS2.pridej('J');
	BS2.pridej('K');
	BS2.pridej('L');
	BS2.cti();


}