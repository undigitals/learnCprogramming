#include <stdio.h>

int main() {
	int a = 10;
	int b = 2;

	a += b;
	printf("%i", a);
	getchar();
	a -= b;
	printf("%i", a);
	getchar();
	b *= a;
	printf("%i", b);
	getchar();
	a /= b;
	printf("%i", a);
	getchar();
	a %= b;
	printf("%i", a);
	getchar();

	return 0;
}