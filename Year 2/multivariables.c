#include <stdio.h>

int main()
{
	int a = 125, b = 12345;
	long ax = 1234567890;
	short s = 4043;
	float x = 2.13459;
	double dx = 1.1415927;
	char c = 'W';
	unsigned long ux = 2541567890;

	printf("%d + %c\n", a, c); /* int, char  */
	printf("%f + %c\n", x, c); /* float, char */
	printf("%e + %f\n", dx, x); /* double, float */
	printf("%d + %e\n", ((int) dx), dx); /* double(int), double */
	printf("%d + %f\n", a, x); /* int, float */
	printf("%d + %d\n", s, b); /* short, int */
	printf("%ld + %d\n", ax, b); /* long, int */
	printf("%d + %c\n", s, c); /* short, char */
	printf("%ld + %c\n", ax, c); /* long, char */
	printf("%ld + %lu\n", ax, ux); /* long, unsigned long */

	return 0;
}
