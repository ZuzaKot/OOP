// Tento zdrojový kód jsem vypracovala zcela samostatně bez cizí pomoci.
// Neokopírovala jsem, ani jsem neopsala cizí zdrojové kódy.
// Nikdo mi při vypracování neradil.
// Pokud některý řádek porušuje toto pravidlo, je označen komentářem NENÍ MOJE TVORBA.
// Porušení těchto pravidel se považuje za podvod, který lze potrestat VYLOUČENÍM ZE STUDIA.
// Zuzana Kotásková, 36777

#include <iostream>
#include "Header.h"
#include "text.h"
using namespace std;

int main()
{
    Text Cviceni;
    Cviceni.text("8.4"); // pro srandu udělaná funkce ☻ volá text zadání
    //*******************
    Double b;
    b.val(36.11 * 36.17);
    b.show(3);  // funkce show(počet desetinných míst);

    Double d;
    d.val(500.0 / 13.0);
    d.show(2);

    Double e;
    e.val(15.9485761254875);
    e.show(7);
    //------------------------------------------------------------------
    // Cviceni 8.5:
    Cviceni.text("8.5"); // pro srandu udělaná funkce ☻ volá text zadání
    //*******************
    Konzole s;
    s.printf_moje("Hotovych zkousek: %d.\n", 3);                        // printf("%d", (int));  <- pro integer lze %i i %d
    s.printf_moje("Z PJC jsem dostala %c.\n", 'A');                     // printf("%c", (char));
    s.printf_moje("Vcera %s byla a za tyden bude zas.\n", "nedele");    // printf("%s", (string));
    
    s.printf_moje("Ve %i. semestru mi chybi %d zkousek.\n", 4, 2);      // printf("%d, %i", (int), (int));
    s.printf_moje("Adresa: Rohanske nabrezi %i %c, Praha\n", 6, 'C');   // printf("%d, %c", (int), (char));
    s.printf_moje("Barbora ma %i %s.\n", 4, "deti");                    // printf("%d, %s", (int), (string));  

    s.printf_moje("Honza dnes ziskal znamky %c a %c.\n", 'A', 'E');     // printf("%c, %c", (char), (char));
    s.printf_moje("Adresa: Rohanske nabrezi %i %c, Praha\n", 'B', 8);   // printf("%c, %d", (char), (int));
    s.printf_moje("...nebo '%s%c'???\n", 'y', "vcel");                  // printf("%c, %s", (char), (string));
    
    s.printf_moje("Mohlo byt %s, ale je %s.\n", "osklivo", "hezky");    // printf("%s, %s", (string), (string));
    s.printf_moje("Barbora ma %i %s.\n", "vnoucat", 7);                 // printf("%s, %d", (string), (int));
    s.printf_moje("Je spravne '%s%c'...\n", "vcel", 'i');               // printf("%s, %c", (string), (char));
    

    s.printf_moje("Cislo a(%i) * b(%d) je celkem %d.\n", 2, 5, 2 * 5);                                      // printf("%d, %i, %i", (int), (int), (int));
    s.printf_moje("Hotovych zkousek: %i, zapoctu: %i, nejlepsi znamka: %c\n", 4, 2, 'A');                   // printf("%d, %i, %i", (int), (int), (char));
    s.printf_moje("Zeptal se ho, kolik je %i krat %d. Jeho odpoved byla: '%s'.\n", 14, 20, "Nevim!");       // printf("%d, %i, %i", (int), (int), (string));

    s.printf_moje("Vsichni %d vzdy reknou jenom %c, ale uz nedoreknou %c.\n", 4, 'A', 'B');                 // printf("%d, %i, %i", (int), (char), (char));
    s.printf_moje("Dalsi tah: policko %c %d, figurka: %s\n", 4, 'A', "jezdec");                             // printf("%d, %i, %i", (int), (char), (string));
    s.printf_moje("Dalsi tah: policko %s %d, figurka: %s\n", 4, "jezdec", "jezdec");                        // printf("%d, %i, %i", (int), (string), (string));
    
    s.printf_moje("Projdeme si body: %c, %c a %c.\n", 'B', 'J', 'Q');                                       //		char, char, char
    s.printf_moje("Je spravne miminka si 'hral%c' nebo 'hral%c'?\t%s\n", 'a', 'y', "Vis, ze vubec nevim?"); //		char, char, string
    s.printf_moje("Otazka %c: %s?\tOdpoved: %s\n", 'D', "Jakou navstevujete skolu?", "VSFS");                 //   	char, string, string
    
    s.printf_moje("JMENO: %s\tPRIJMENI: %s\tPOVOLANI: %s\n", "Petr", "Novak", "kuchar");                    // 		string, string, string
    s.printf_moje("Int: %i, \tchar: %c, \tint: %i\n", 5, 'E', 954);                                             //* int, char, int
    s.printf_moje("int: %i, \tstring: %s, \tint: %i\n", 985, "vcera", 845);                                     //* int, string, int
    
    s.printf_moje("int: %i, \tstring: %s, \tchar: %c\n", 12, "vice", 'F');                                      //* int, string, char
    s.printf_moje("char: %c, \tint: %i, \tint: %i\n", 'E', 854, 11);                                            //* char, int, int
    s.printf_moje("char: %c, \tint: %i, \tchar: %c\n", 'r', 4, 'Q');                                            //* char, int, char
    
    s.printf_moje("char: %c, \tint: %i, \tstring: %s\n", 'U', 74, "Uz fakt nevim, co si vymyslet...");          //* char, int, string
    s.printf_moje("char: %c, \tchar: %c, \tint: %i\n", 'M', 'N', 5);                                            //* char, char, int
    s.printf_moje("char: %c, \tstring: %s, \tint: %i\n", 'w', "jeste", 9);                                      //* char, string, int
    
    s.printf_moje("char: %c, \tstring: %s, \tchar: %c\n", 'q', "poslednich", 'q');                              //* char, string, char
    s.printf_moje("string: %s, \tint: %i, \tint: %i\n", "NEKOLIK", 5, 98);                                      //* string, int, int
    s.printf_moje("string: %s, \tint: %i, \tchar: %c\n", "malo", 45, 'P');                                      //* string, int, char
    
    s.printf_moje("string: %s, \tint: %i, \tstring: %s\n", "radku", 45612, "a je to");                          //* string, int, string
    s.printf_moje("string: %s, \tchar: %c, \tint: %i\n", "staci", 'I', 8);                                      //* string, char, int
    s.printf_moje("string: %s, \tchar: %c, \tchar: %c\n", "uz", 'O', 'K');                                      //* string, char, char
    
    s.printf_moje("string: %s, \tchar: %c, \tstring: %s\n", "jenom", 'B', "vydrzet");                           //* string, char, string
    s.printf_moje("string: %s, \tstring: %s, \tint: %i\n", "zcela", "posledni", 5);                             //* string, string, int
    s.printf_moje("string: %s, \tstring: %s, \tchar: %c\n", "dve", "slova", 'L');                               //* string, string, char
    //------------------------------------------------------------------
}