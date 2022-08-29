// Tento zdrojový kód jsem vypracovala zcela samostatně bez cizí pomoci.
// Neokopírovala jsem, ani jsem neopsala cizí zdrojové kódy.
// Nikdo mi při vypracování neradil.
// Pokud některý řádek porušuje toto pravidlo, je označen komentářem NENÍ MOJE TVORBA.
// Porušení těchto pravidel se považuje za podvod, který lze potrestat VYLOUČENÍM ZE STUDIA.
// Zuzana Kotásková, 36777

#include <iostream>
#include "student.h"

int main()
{
    Student A, B;
    A.jmeno("A");
    B.jmeno("B");

    A.zapocet(Predmet::OOP);
    A.zkouska(Predmet::OOP, Znamka::B);
    A.save();
    
    B.zapocet(Predmet::VIMA);
    B.zkouska(Predmet::VIMA, Znamka::A);
    B.save();
    
    A.load();
    B.load();

    A.zapocet(Predmet::VIMA);
    A.zkouska(Predmet::VIMA, Znamka::D);
    A.zkouska(Predmet::BS, Znamka::E); // nezapíše se, ještě není zápočet
    A.zapocet(Predmet::AJ_4);
    A.zapocet(Predmet::BI);
    A.zkouska(Predmet::BI, Znamka::E);
    printf("Studijni prumer studenta A: %1.2f\t\tzapoctu: %d\t\tzkousek: %d\n\n", A.prumer(), A.maZapocet() - 1, A.maZkousek() - 1); // musí být -1, protože opětovně volám funkci


    B.zapocet(Predmet::BI);
    B.zkouska(Predmet::BI, Znamka::C);
    printf("Studijni prumer studenta B: %1.2f\t\tzapoctu: %d\t\tzkousek: %d\n\n", B.prumer(), B.maZapocet() - 1, B.maZkousek() - 1);


}

