#pragma once


class Student
{
private:

	int zapis;
	int zapoctu;
	int zkousek;

public:

	Student() { zapis = 0; zapoctu = 0; zkousek = 0; }; // uchovává ke každému studentovi pøedmìt, známku a poèet pokusù
	
	Student(const Student&);            // Declare copy constructor. (@Microsoft)
	Student& operator=(const Student& x); // Declare copy assignment. (@Microsoft)
};

