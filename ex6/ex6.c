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
	output=(input*input)+(2*input)+3;
	printf("Result is: %f. (Y=(%d*%d)+(2*%d)+3)",output,input,input,input);
}
