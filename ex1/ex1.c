#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void main() 
{
	char prompt;
	float number1;
	printf("Please enter in a value for number1 \n\r");
	scanf("%f",&number1);
	printf("The value of number1 is %f \n\r",number1);
	printf("Please press any key to exit \n\r");
	scanf("\n%c",&prompt);
}
