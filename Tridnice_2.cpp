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
#include "student.h"
#include "text.h"
using namespace std;


// bacha!!! to neni Dalsi_cviceni, ale Dalsi_civiceni......................omg
int main()
{
    Text Cviceni;
    Cviceni.text("1.4"); 
    // toto zadani je pouze inspiraci pro cviceni "Trinice_2" (Tridnici pouziva vyucujici - zapisuje zapocty a znamky do INDEXu)
    //*****************
    
    Trida U, V;
    U.vytvor(2, "B21KAIPH"); // rocnik, trida
    V.vytvor(1, "B21PAIPH");

    Student A, B, C, D;
    A.s_name("Alzbeta", U); // jmeno, rocnik & trida
    B.s_name("Blanka", U);
    C.s_name("Milan", V);
    D.s_name("Leos", V);
    A.zapisovani(Predmet::BI, Znamka::z);
    A.zapisovani(Predmet::BI, Znamka::D);
    A.zapisovani(Predmet::OOP, Znamka::z);
    A.zapisovani(Predmet::OOP, Znamka::D);
    A.zapisovani(Predmet::OOP, Znamka::C);
    A.zapisovani(Predmet::OOP, Znamka::B);
    A.zapisovani(Predmet::OOP, Znamka::A);
    B.zapisovani(Predmet::Pr_W2, Znamka::z);
    B.zapisovani(Predmet::AJ_4, Znamka::z);
    B.zapisovani(Predmet::VIMA, Znamka::B);
    C.zapisovani(Predmet::VIMA, Znamka::z);
    C.zapisovani(Predmet::VIMA, Znamka::D);
    B.zapisovani(Predmet::AJ_4, Znamka::z);
    D.zapisovani(Predmet::OOP, Znamka::z);
    D.zapisovani(Predmet::BI, Znamka::z);
    D.zapisovani(Predmet::OOP, Znamka::E);
    D.zapisovani(Predmet::BI, Znamka::n);
    
    
    D.score();
    B.score();
    C.score();
    A.score();

}