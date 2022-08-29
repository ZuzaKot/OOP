#pragma once
namespace Pokus {
	int a = 1;
	int Pokus_a() { printf("%d\n", a); return a; };
	int f() { printf("namespace Pokus f(): %d\n", a); return a; };
	int g() { printf("namespace Pokus g(): %d\n", a * a); return a * a; };
};

namespace Dalsi_pokus {
	int b = 2;
	int Dalsi_pokus_a() { printf("%d\n", b); return b; };
	int f() { printf("namespace Dalsi_pokus f(): %d\n", b); return b; };
	int g() { printf("namespace Dalsi_pokus g(): %d\n", b * b); return b * b; };
};

namespace Jeste_dalsi_pokus {
	int c = 3;
	int Jeste_dalsi_pokus_a() { printf("%d\n", c); return c; };
	int f() { printf("namespace Jeste_dalsi_pokus f(): %d\n", c); return c; };
	int g() { printf("namespace Jeste_dalsi_pokus g(): %d\n", c * c); return c * c; };
};
