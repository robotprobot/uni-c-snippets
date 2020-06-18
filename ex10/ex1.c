#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

void main()
{
	char password[31] = "ThisIsThePassword";
	char userpassword[31];
	
	printf("Please enter password: ");
	scanf("%s",&userpassword);
	
	if(strcmp(userpassword,password) == 0)
	{
		printf("Safe Open.");
	}
	else
	{
		printf("ALARM!");
	}
}
