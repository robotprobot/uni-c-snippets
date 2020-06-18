#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i;

int main(int argc, char* argv[])
{
	for (i = 1; i < argc; i++) {
		printf("Converting %s into integer - ", argv[i]);
		printf("INTEGER: %d\n", atoi(argv[i]));
	}
}