// Tento zdrojový kód jsem vypracovala zcela samostatně bez cizí pomoci.
// Neokopírovala jsem, ani jsem neopsala cizí zdrojové kódy.
// Nikdo mi při vypracování neradil.
// Pokud některý řádek porušuje toto pravidlo, je označen komentářem NENÍ MOJE TVORBA.
// Porušení těchto pravidel se považuje za podvod, který lze potrestat VYLOUČENÍM ZE STUDIA.
// Zuzana Kotásková, 36777

#include <iostream>
#include "komplexni_cislo.h"

int main()
{
    KomplexniC z1, z2, z3;
    int A = 8, B = 5, C = 2, D = 3, E = 7, F = 1;

    z1.vstup(A, B, "A"); // původně jsem měla označení ("z1","z2","z3"), ale nebylo to tak přehledné jako ("A","B","C") 
    z2.vstup(C, D, "B"); //
    z3.vstup(E, F, "C"); //

    z1.scitani(z2);         //                                        > > > > > > > > > > > > > > > > > > ˇ
    z1.odecitani(z2);       //                                        > >                                 ˇ
    z1.nasobeni(z2);        //                                        > >                                 ˇ
                            //                                                                            ˇ
    z3.scitani(z1);         //                                                                            ˇ
    //----------------------------------------------------------------------                              ˇ
    // Cviceni_3_2:         //                                                                            ˇ
    z3.getX();              //                                                                            ˇ
    z3.setX(D);             //                                                                            ˇ
    z3.getX();              //                                                                            ˇ
    z3.scitani(z1);         //                                                                            ˇ
    //----------------------------------------------------------------------                              ˇ
    // Cviceni_3_3:         //                                                                            ˇ
    z1.Op('+', z2);         //                      < < < < < < < < < < < < < < < < < < < < < < < < < < < ˇ
    z1.Op('-', z2);         //                      < < 
    z1.Op('*', z2);         //                      < < 
    //----------------------------------------------------------------------
}
