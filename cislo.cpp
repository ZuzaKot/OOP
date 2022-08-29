#include "cislo.h"
#include <string>
using namespace std;

//----------------------------------------------------------------------
// Cviceni 7.1
void CeleCislo::tvor(string nazevH, int vstupH) {						// virtualni
	this->name = nazevH;
	this->value = vstupH;
	printf("Cele cislo:\t\t");
	for (int i = 0; nazevH[i] != '\0'; i++) { printf("%c", nazevH[i]); };
	printf(" = %d\n", vstupH);
}
//----------------------------------------------------------------------
int CeleCislo::scitej(int b) {
	string x = this->name;
	int z = this->value;
	int a = z + b;
	printf("\nSoucet hodnot: %d + %d = %d\n", z, b, a);
	CeleCislo::vytvor(x+"_novy", a);
	return a;
}
//----------------------------------------------------------------------
int CeleCislo::vytvor(string nazevHodnoty, int vstupniHodnota){
	if (vstupniHodnota) {
		this->name = nazevHodnoty;
		this->value = vstupniHodnota;
		printf("Cele cislo:\t\t");
		for (int i = 0; nazevHodnoty[i] != '\0'; i++) { printf("%c", nazevHodnoty[i]); };
		printf(" = %d\n", vstupniHodnota);
		return 1;
	}
	else return 0;
}
//----------------------------------------------------------------------
int CeleCislo::get() {
	string a = this->name;
	int x = this->value;
	printf("\nTYP: cele cislo\t\tHODNOTA: %d\t\tNAZEV: ", x);
	for (int i = 0; a[i] != '\0'; i++) { printf("%c", a[i]); };
	printf("\n");
	return 1;
}
//----------------------------------------------------------------------
// Cviceni 7.1
void KomplexniCislo::tvor(string nazevH, int vstupniH_a, int vstupniH_b) {		// virtualni
		this->name = nazevH;
		this->value_x = vstupniH_a;
		this->value_y = vstupniH_b;
		printf("Komplexni cislo:\t");
		for (int i = 0; nazevH[i] != '\0'; i++) { printf("%c", nazevH[i]); };
		printf("[%d,%d]\n", vstupniH_a, vstupniH_b);
}
//----------------------------------------------------------------------
int KomplexniCislo::scitej(int a, int b) {
	int n2 = this->value_y;
	int f2 = this->value_x;
	int f = f2 + a;
	int n = n2 + b;
	string q = this->name;
	printf("\nSoucet hodnot: [ %d, %d] + [ %d, %d] => ", f2, n2, a, b);
	KomplexniCislo::vytvor(q + "_novy", f, n);
	return 1;
}
//----------------------------------------------------------------------
int KomplexniCislo::vytvor(string nazevHodnoty, int vstupniHodnota_a, int vstupniHodnota_b) {
	if (vstupniHodnota_a || vstupniHodnota_b) {
		this->name = nazevHodnoty;
		this->value_x = vstupniHodnota_a;
		this->value_y = vstupniHodnota_b;
		printf("Komplexni cislo:\t");
		for (int i = 0; nazevHodnoty[i] != '\0'; i++) { printf("%c", nazevHodnoty[i]); };
		printf("[%d,%d]\n", vstupniHodnota_a, vstupniHodnota_b);
		return 1;
	}
	else return 0;
}
//----------------------------------------------------------------------
int KomplexniCislo::get() {
	int x = this->value_x;
	int y = this->value_y;
	string a = this->name;
	printf("\nTYP: komplexni cislo\tHODNOTA: [%d,%d]\tNAZEV: ", x, y);
	for (int i = 0; a[i] != '\0'; i++) { printf("%c", a[i]); };
	printf("\n");
	return 1;
}
//----------------------------------------------------------------------
// Cviceni 7.1
void RealneCislo::tvor(string nazevH, float vstupH) {					// virtualni
	this->name = nazevH;
	this->value = vstupH;
	printf("Realne cislo:\t\t");
	for (int i = 0; nazevH[i] != '\0'; i++) { printf("%c", nazevH[i]); };
	printf(" = %3f\n", vstupH);
}
//----------------------------------------------------------------------
int RealneCislo::vytvor(string nazevHodnoty, float vstupniHodnota) {
	if (vstupniHodnota) {
		this->name = nazevHodnoty;
		this->value = vstupniHodnota;
		printf("Realne cislo:\t\t");
		for (int i = 0; nazevHodnoty[i] != '\0'; i++) { printf("%c", nazevHodnoty[i]); };
		printf(" = %3f\n", vstupniHodnota);
		return 1;
	}
	else return 0;
}
//----------------------------------------------------------------------
int RealneCislo::get() {
	string a = this->name;
	float x = this->value;
	printf("\nTYP: realne cislo\tHODNOTA: %3f\tNAZEV: ", x);
	for (int i = 0; a[i] != '\0'; i++) { printf("%c", a[i]); };
	printf("\n");
	return 1;
	
}
//----------------------------------------------------------------------
int RealneCislo::scitej(float b) {
	string x = this->name;
	float z = this->value;
	float a = z + b;
	printf("\nSoucet hodnot: %3f + %3f = %3f\n", z, b, a);
	RealneCislo::vytvor(x + "_novy", a);
	return 1;
}
//----------------------------------------------------------------------
