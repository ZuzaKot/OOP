#pragma once


class Student
{
private:

	int zapis;
	int zapoctu;
	int zkousek;

public:

	Student() { zapis = 0; zapoctu = 0; zkousek = 0; }; // uchov�v� ke ka�d�mu studentovi p�edm�t, zn�mku a po�et pokus�
	
	Student(const Student&);            // Declare copy constructor. (@Microsoft)
	Student& operator=(const Student& x); // Declare copy assignment. (@Microsoft)
};

