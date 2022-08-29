#include "sort_min.h"
int Sort_min::sortMin(int& A, int& B, int& C) {
	Sort_min::vstup(A, B, C);
	int tmp = 0;
	for(int i = 0; i < 3; i++){
		if (A > B) {
			tmp = A;
			A = B;
			B = tmp;
		}
		if (A > C) {
			tmp = A;
			A = C;
			C = tmp;
		}
		if (B > C) {
			tmp = B;
			B = C;
			C = tmp;
		}
	}
	Sort_min::A = A;
	Sort_min::B = B;
	Sort_min::C = C;
	Sort_min::vystup(A, B, C);
	return tmp;
};

