#include "Header.h"

void Double::show(int pocetMistIntPo)
{
	double x_d = this->i; // hodnota výsledku vèetnì desetinných míst
	int x_i = (int)x_d; // hodnota výsledku bez desetinných míst
	
	int i = 1;
	int pocetMistIntPred = 0; // výpis setprecision(x) používá výpis celkového poètu èíslic, tj. èíslic pøed + za desetinnou èárkou
	while(x_i / i >= 1) {	
		x_i = x_i / i;
		pocetMistIntPred++;
		i = 10;
	} 
	
	int pocetMistIntCelkem = pocetMistIntPred + pocetMistIntPo;

	cout << left << setw(10) << "Double: " << right << setw(20) << setprecision(pocetMistIntCelkem) << x_d << endl;
};

//------------------------------------------------------------------
// Cviceni 8.5:
void Konzole::printf_moje(string text, string promenna) {
	int j = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i]=='%'&&text[i+1]=='s') {
			for (j; promenna[j] != '\0'; j++) {
				cout << promenna[j];
			}
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, string promenna1, string promenna2) {
	int x = 0;
	int j = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && text[i + 1] == 's') {
			if (x == 0) {
				for (j; promenna1[j] != '\0'; j++) { cout << promenna1[j];	}
				j = 0; 
				x++; 
			}
			else if (x == 1) {
				for (j; promenna2[j] != '\0'; j++) { cout << promenna2[j];  }
			}
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, char promenna) {
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && text[i + 1] == 'c') {
			cout << promenna;
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, int promenna) {
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && (text[i + 1] == 'd' || text[i + 1] == 'i')) {
			cout << promenna;
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, int promenna1, int promenna2) {
	int x = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && (text[i + 1] == 'd' || text[i + 1] == 'i')) {
			if (x == 0) {
				cout << promenna1;
				x++;
			}
			else if (x == 1) cout << promenna2;
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, int promenna1, string promenna2) {
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && (text[i + 1] == 'd' || text[i + 1] == 'i')) {
			cout << promenna1;
			i++;
		}
		else if (text[i] == '%' && text[i + 1] == 's') {
			for (int j = 0; promenna2[j] != '\0'; j++) {	cout << promenna2[j];	}
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, string promenna1, int promenna2) {
	Konzole::printf_moje(text, promenna2, promenna1);
};


void Konzole::printf_moje(string text, int promenna1, char promenna2) {
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && (text[i + 1] == 'd' || text[i + 1] == 'i')) { cout << promenna1; i++; }
		else if (text[i] == '%' && text[i + 1] == 'c') { cout << promenna2; i++; }
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, char promenna1, int promenna2) {
	Konzole::printf_moje(text, promenna2, promenna1);
};

void Konzole::printf_moje(string text, char promenna1, char promenna2) {
	int x = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && text[i + 1] == 'c') {
			if (x == 0) {
				cout << promenna1;
				x++;
			}
			else if (x == 1) {	cout << promenna2; 	}
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, char promenna1, string promenna2) {
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && text[i + 1] == 'c') {
			cout << promenna1;
			i++;
		}
		else if (text[i] == '%' && text[i + 1] == 's') {
			for (int j = 0; promenna2[j] != '\0'; j++) { cout << promenna2[j]; }
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, string promenna1, char promenna2) {
	Konzole::printf_moje(text, promenna2, promenna1);
};

void Konzole::printf_moje(string text, int promenna1, int promenna2, int promenna3) {		//		int, int, int
	int x = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && (text[i + 1] == 'd' || text[i + 1] == 'i')) {
			if (x == 0) {
				cout << promenna1;
				x++;
			}
			else if (x == 1) {
				cout << promenna2;
				x++;
			}
			else if (x == 2) cout << promenna3;
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, int promenna1, int promenna2, char promenna3) {		//		int, int, char
	int x = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && (text[i + 1] == 'd' || text[i + 1] == 'i')) {
			if (x == 0) {
				cout << promenna1;
				x++;
			}
			else if (x == 1) {	cout << promenna2;	}
			i++;
		}
		else if (text[i] == '%' && text[i + 1] == 'c') {
			cout << promenna3;
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, int promenna1, int promenna2, string promenna3) {	//		int, int, string
	int x = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && (text[i + 1] == 'd' || text[i + 1] == 'i')) {
			if (x == 0) {
				cout << promenna1;
				x++;
			}
			else if (x == 1) { cout << promenna2; }
			i++;
		}
		else if (text[i] == '%' && text[i + 1] == 's') {
			for (int j = 0; promenna3[j] != '\0'; j++) {
				cout << promenna3[j];
			}
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, int promenna1, char promenna2, int promenna3) {//* int, char, int
	Konzole::printf_moje(text, promenna1, promenna3, promenna2); //(int), (int), (char)
};

void Konzole::printf_moje(string text, int promenna1, char promenna2, char promenna3) {		//		int, char, char
	int x = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && (text[i + 1] == 'd' || text[i + 1] == 'i')) { cout << promenna1; i++; }
		else if (text[i] == '%' && text[i + 1] == 'c') {
			if (x == 0) {
				cout << promenna2;
				x++;
			}
			else if (x == 1) {  cout << promenna3; }
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, int promenna1, char promenna2, string promenna3) {	//		int, char, string
	int x = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && (text[i + 1] == 'd' || text[i + 1] == 'i')) { cout << promenna1; i++; }
		else if (text[i] == '%' && text[i + 1] == 'c') {	cout << promenna2; 	i++;	}
		else if (text[i] == '%' && text[i + 1] == 's') {
			for (int j = 0; promenna3[j] != '\0'; j++) {	cout << promenna3[j];	}
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, int promenna1, string promenna2, int promenna3) {//* int, string, int
	Konzole::printf_moje(text, promenna1, promenna3, promenna2); //(int), (int), (string)
};

void Konzole::printf_moje(string text, int promenna1, string promenna2, char promenna3) {//* int, string, char
	Konzole::printf_moje(text, promenna1, promenna3, promenna2); //(int), (char), (string)
};

void Konzole::printf_moje(string text, int promenna1, string promenna2, string promenna3) {	//		int, string, string
	int x = 0;
	int j = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && (text[i + 1] == 'd' || text[i + 1] == 'i')) { cout << promenna1; i++; }
		else if (text[i] == '%' && text[i + 1] == 's') {
			if (x == 0) {
				for (j; promenna2[j] != '\0'; j++) { cout << promenna2[j]; }
				j = 0;
				x++;
			}
			else if (x == 1) {
				for (j; promenna3[j] != '\0'; j++) { cout << promenna3[j]; }
			}
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, char promenna1, int promenna2, int promenna3) {//* char, int, int
	Konzole::printf_moje(text, promenna2, promenna3, promenna1); //(int), (int), (char)
};

void Konzole::printf_moje(string text, char promenna1, int promenna2, char promenna3) {//* char, int, char
	Konzole::printf_moje(text, promenna2, promenna1, promenna3); //(int), (char), (char)
};

void Konzole::printf_moje(string text, char promenna1, int promenna2, string promenna3) {//* char, int, string
	Konzole::printf_moje(text, promenna2, promenna1, promenna3); //(int), (char), (string)
};

void Konzole::printf_moje(string text, char promenna1, char promenna2, int promenna3) {//* char, char, int
	Konzole::printf_moje(text, promenna3, promenna1, promenna2); //(int), (char), (char)
};

void Konzole::printf_moje(string text, char promenna1, char promenna2, char promenna3) {	//		char, char, char
	int x = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && text[i + 1] == 'c') {
			if (x == 0) {
				cout << promenna1;
				x++;
			}
			else if (x == 1) {
				cout << promenna2;
				x++;
			}
			else if (x == 2) { cout << promenna3; }
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, char promenna1, char promenna2, string promenna3) {	//		char, char, string
	int x = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && text[i + 1] == 'c') {
			if (x == 0) {
				cout << promenna1;
				x++;
			}
			else if (x == 1) { cout << promenna2; }
			i++;
		}
		else if (text[i] == '%' && text[i + 1] == 's') {
			for (int j = 0; promenna3[j] != '\0'; j++) { cout << promenna3[j]; }
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, char promenna1, string promenna2, int promenna3) {//* char, string, int
	Konzole::printf_moje(text, promenna3, promenna1, promenna2); //(int), (char), (string)
};

void Konzole::printf_moje(string text, char promenna1, string promenna2, char promenna3) {//* char, string, char
	Konzole::printf_moje(text, promenna1, promenna3, promenna2); //(char), (char), (string)
};

void Konzole::printf_moje(string text, char promenna1, string promenna2, string promenna3) {//		char, string, string
	int x = 0;
	int j = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && text[i + 1] == 'c') { cout << promenna1; i++; }
		else if (text[i] == '%' && text[i + 1] == 's') {
			if (x == 0) {
				for (j; promenna2[j] != '\0'; j++) { cout << promenna2[j]; }
				j = 0;
				x++;
			}
			else if (x == 1) {
				for (j; promenna3[j] != '\0'; j++) { cout << promenna3[j]; }
			}
			i++;
		}
		else cout << text[i];
	}
};

void Konzole::printf_moje(string text, string promenna1, int promenna2, int promenna3) {//* string, int, int
	Konzole::printf_moje(text, promenna2, promenna3, promenna1); //(int), (int), (string)
};

void Konzole::printf_moje(string text, string promenna1, int promenna2, char promenna3) {//* string, int, char
	Konzole::printf_moje(text, promenna2, promenna3, promenna1); //(int), (char), (string)
};

void Konzole::printf_moje(string text, string promenna1, int promenna2, string promenna3) {//* string, int, string
	Konzole::printf_moje(text, promenna2, promenna1, promenna3); //(int), (string), (string)
};

void Konzole::printf_moje(string text, string promenna1, char promenna2, int promenna3) {//* string, char, int
	Konzole::printf_moje(text, promenna3, promenna2, promenna1); //(int), (char), (string)
};

void Konzole::printf_moje(string text, string promenna1, char promenna2, char promenna3) {//* string, char, char
	Konzole::printf_moje(text, promenna2, promenna3, promenna1); //(char), (char), (string)
};

void Konzole::printf_moje(string text, string promenna1, char promenna2, string promenna3) {//* string, char, string
	Konzole::printf_moje(text, promenna2, promenna1, promenna3); //(char), (string), (string)
};

void Konzole::printf_moje(string text, string promenna1, string promenna2, int promenna3) {//* string, string, int
	Konzole::printf_moje(text, promenna3, promenna1, promenna2); //(int), (string), (string)
};

void Konzole::printf_moje(string text, string promenna1, string promenna2, char promenna3) {//* string, string, char
	Konzole::printf_moje(text, promenna3, promenna1, promenna2); //(char), (string), (string)
};

void Konzole::printf_moje(string text, string promenna1, string promenna2, string promenna3) {//	string, string, string
	int x = 0;
	int j = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '%' && text[i + 1] == 's') {
			if (x == 0) {
				for (j; promenna1[j] != '\0'; j++) { cout << promenna1[j]; }
				j = 0;
				x++;
			}
			else if (x == 1) {
				for (j; promenna2[j] != '\0'; j++) { cout << promenna2[j]; }
				j = 0;
				x++;
			}
			else if (x == 2) {
				for (j; promenna3[j] != '\0'; j++) { cout << promenna3[j]; }
			}
			i++;
		}
		else cout << text[i];
	}
};