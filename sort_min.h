#pragma once
#include <stdio.h>
class Sort_min {
private:
	int A;
	int B;
	int C;
public:
	Sort_min() { A = 0; B = 0; C = 0; };

	void vstup(int& G, int& H, int& I) { printf("Vstup: %d, %d, %d\n", G, H, I); };
	void vystup(int& G, int& H, int& I) { printf("Vystup: %d, %d, %d\n\n", G, H, I); };
	int sortMin(int& G, int& H, int& I);
};