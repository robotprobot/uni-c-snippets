#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

void main()
{
	int input;
	float output;
	
	printf("Please provide X:");
	scanf("%d",&input);
	output=((input+1)*(input+2)*(input+3))/(input*input);
	printf("Result is: %f. (Y=((%d+1)*(%d+2)*(%d+3))/(%d*%d))",output,input,input,input,input,input);
}
