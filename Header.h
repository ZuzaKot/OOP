#pragma once
using namespace std;

namespace Pokus {
	int a = 1;
	int Pokus_a() { cout << a << endl; return a; };
	int f() { cout << "namespace Pokus f(): " << a << endl; return a; };
	int g() { cout << "namespace Pokus g(): " << (a * a) << endl; return a * a; };
};

namespace Dalsi_pokus {
	int a = 2;
	int Dalsi_pokus_a() { cout << a <<endl; return a; };
	int f() { cout << "namespace Dalsi_pokus f(): " << a << endl; return a; };
	int g() { cout << "namespace Dalsi_pokus g(): " << (a * a) << endl; return a * a; };
};

namespace Jeste_dalsi_pokus {
	int a = 3;
	int Jeste_dalsi_pokus_a() { cout << a << endl; return a; };
	int f() { cout << "namespace Jeste_dalsi_pokus f(): "<< a << endl; return a; };
	int g() { cout << "namespace Jeste_dalsi_pokus g(): " << (a * a) << endl; return a * a; };
};
