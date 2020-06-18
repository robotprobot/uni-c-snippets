#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define pi 3.1415927

void main()
{
	float i=0;
	float sinresult;
	do{
		sinresult = sin(i);
		printf("Sine value of %4.2f is %5.4f\r\n",i,sinresult);
		i=i+0.10;
	}while(i<2*pi);
}
