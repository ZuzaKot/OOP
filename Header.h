#pragma once
#include <iostream>
using namespace std;

class Konzole {
public:
	Konzole() { };
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
	virtual void show() { cout << "Double: " << i << endl; };
	virtual void val(double a) { i = a; };
};

class Char :public Konzole {
private:
	char i;
public:
	virtual void show() { cout << "Char: " << i << endl; };
	virtual void val(char a) { i = a; };
};
