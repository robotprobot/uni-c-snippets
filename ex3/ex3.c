#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void main() 
{
	char prompt;
	int number1,number2,number3;
	printf("Please enter number1: \n\r");
	scanf("%d",&number1);
	printf("Please enter number2: \n\r");
	scanf("%d",&number2);
	printf("Please enter number2: \n\r");
	scanf("%d",&number3);
	printf("The first variable is %d, the second variable is %d and the last variable is %d. \n\r",number1,number2,number3);
	printf("Please press any key to exit \n\r");
	scanf("\n%c",&prompt);
}
