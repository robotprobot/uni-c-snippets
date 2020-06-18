#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

void main()
{
	printf("Times Table\r\n");
	printf("***********\r\n");
	printf("\t1's\t2's\t3's\t4's\t5's\t6's\t7's\t8's\t9's\t10's\r\n");
	int i=1;
	int a;
	int b=1;
	int current=1;
	do{
		for(a=0;a<10;a++){
			printf("%ix\t%i\t%i\t%i\t%i\t%i\t%i\t%i\t%i\t%i\t%i\t\r\n",current,i,i*2,i*3,i*4,i*5,i*6,i*7,i*8,i*9,i*10);
			i=(i/1)+1;
			current++;
			b++;
			}
	}while(b<10);
}
