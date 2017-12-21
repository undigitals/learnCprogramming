#include <stdio.h>
#include <corecrt_math.h>

int main() {
#define PI 3.141593 // this constant type variable declaring it directly instruction to preprocessor
	                // NO Equals, NO semi-colon;

	printf("%.6f\n", PI);
#define PI 5.00		//so here we can it is not really constant as we can redefine it
	printf("%.6f\n", PI);
	return 0;

}