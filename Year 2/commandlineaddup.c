#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i;

int main(int argc, char* argv[])
{
	int argumenttotal = 0;
	printf("There are %d arguments\n", argc);

	for (i = 1; i < argc; i++) {
		printf("Total is currently %d - ", argumenttotal);
		argumenttotal = argumenttotal + atoi(argv[i]);
		printf("added %d to total, taking total to %d\n", atoi(argv[i]), argumenttotal);
	}
	printf("Total is %d\n", argumenttotal);
}