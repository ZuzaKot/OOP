#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Konzole {
public:
	Konzole() { };
	//------------------------------------------------------------------
	// Cviceni 8.5:
	// pocet argumentu = 1;
	void printf_moje(string text, int promenna);
	void printf_moje(string text, char promenna);
	void printf_moje(string text, string promenna);
	// pocet argumentu = 2;
	void printf_moje(string text, int promenna1, int promenna2);
	void printf_moje(string text, int promenna1, char promenna2);
	void printf_moje(string text, int promenna1, string promenna2);

	void printf_moje(string text, char promenna1, char promenna2);
	void printf_moje(string text, char promenna1, int promenna2);
	void printf_moje(string text, char promenna1, string promenna2);

	void printf_moje(string text, string promenna1, string promenna2);
	void printf_moje(string text, string promenna1, int promenna2);
	void printf_moje(string text, string promenna1, char promenna2);
	// pocet argumentu = 3															-----   s *  již existují 
	void printf_moje(string text, int promenna1, int promenna2, int promenna3);		//		int, int, int
	void printf_moje(string text, int promenna1, int promenna2, char promenna3);	//		int, int, char
	void printf_moje(string text, int promenna1, int promenna2, string promenna3);	//		int, int, string

	void printf_moje(string text, int promenna1, char promenna2, int promenna3);		//* int, char, int
	void printf_moje(string text, int promenna1, char promenna2, char promenna3);	//		int, char, char
	void printf_moje(string text, int promenna1, char promenna2, string promenna3);	//		int, char, string

	void printf_moje(string text, int promenna1, string promenna2, int promenna3);		//* int, string, int
	void printf_moje(string text, int promenna1, string promenna2, char promenna3);		//* int, string, char
	void printf_moje(string text, int promenna1, string promenna2, string promenna3);//		int, string, string
	
	void printf_moje(string text, char promenna1, int promenna2, int promenna3);		//* char, int, int
	void printf_moje(string text, char promenna1, int promenna2, char promenna3);		//* char, int, char
	void printf_moje(string text, char promenna1, int promenna2, string promenna3);		//* char, int, string

	void printf_moje(string text, char promenna1, char promenna2, int promenna3);		//* char, char, int
	void printf_moje(string text, char promenna1, char promenna2, char promenna3);	//		char, char, char
	void printf_moje(string text, char promenna1, char promenna2, string promenna3);//		char, char, string
	
	void printf_moje(string text, char promenna1, string promenna2, int promenna3);		//* char, string, int
	void printf_moje(string text, char promenna1, string promenna2, char promenna3);	//* char, string, char
	void printf_moje(string text, char promenna1, string promenna2, string promenna3);//	char, string, string
	
	void printf_moje(string text, string promenna1, int promenna2, int promenna3);//* string, int, int
	void printf_moje(string text, string promenna1, int promenna2, char promenna3);//* string, int, char
	void printf_moje(string text, string promenna1, int promenna2, string promenna3);//* string, int, string
	
	void printf_moje(string text, string promenna1, char promenna2, int promenna3);//* string, char, int
	void printf_moje(string text, string promenna1, char promenna2, char promenna3);//* string, char, char
	void printf_moje(string text, string promenna1, char promenna2, string promenna3);//* string, char, string
	
	void printf_moje(string text, string promenna1, string promenna2, int promenna3);//* string, string, int
	void printf_moje(string text, string promenna1, string promenna2, char promenna3);//* string, string, char
	void printf_moje(string text, string promenna1, string promenna2, string promenna3);//		string, string, string
	//------------------------------------------------------------------
};

class Integer :public Konzole {
private:
	int i;
public:
	virtual void show() { cout << "Integer: " << i << endl; };
	virtual void val(int a) { i = a; };
};

class Double :public Konzole {
private:
	double i;
public:
	virtual void show(int pocetMistIntPo); // poèet èísel za desetinnou èárkou
	virtual void val(double a) { i = a; };
};

class Char :public Konzole {
private:
	char i;
public:
	virtual void show() { cout << "Char: " << i << endl; };
	virtual void val(char a) { i = a; };
};
