#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void main() 
{
	char prompt;
	float number1,number2,number3,number4,number5;
	printf("Please enter in a value for number1 \n\r");
	scanf("%f",&number1);
	printf("Please enter in a value for number2 \n\r");
	scanf("%f",&number2);
	printf("Please enter in a value for number3 \n\r");
	scanf("%f",&number3);
	printf("Please enter in a value for number4 \n\r");
	scanf("%f",&number4);
	printf("Please enter in a value for number5 \n\r");
	scanf("%f",&number5);
	printf("The values are: %f, %f, %f, %f, %f  \n\r",number1,number2,number3,number4,number5);
	printf("Please press any key to exit \n\r");
	scanf("\n%c",&prompt);
}
