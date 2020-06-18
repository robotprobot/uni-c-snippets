#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int m,s,s2,n;
float a[40][40],b[40][40],c[40][40];

void main()
{
		printf("Please enter the M of matrix A (MxS):");
		scanf("%d",&m);
		printf("Please enter the S of matrix A (MxS):");
		scanf("%d",&s);
		printf("Please enter the S of matrix B (SxN):");
		scanf("%d",&s2);
		printf("Please enter the N of matrix B (SxN):");
		scanf("%d",&n);
		
		while (s2 != s)
		{
			printf("The dimension of matrix B must be%2d x n\n\r",s);
			printf("Please enter the S of matrix B (SxN):");
			scanf("%d",&s2);
			printf("Please enter the N of matrix B (SxN):");
			scanf("%d",&n);
		}
		matrixfiller(m,s,'A',a);
		matrixfiller(s2,n,'B',b);
		matrixmultiplier(m,s,n,a,b,c);
		matrixdisplayer(m,n,'C',c);
}

void matrixfiller(int input1,int input2,char name,float temp[40][40])
{
		int i,j;
		for (i=1;i<=input1;i++)
		{
			for (j=1;j<=input2;j++)
			{
				printf("Please enter the element %2d,%2d of matrix %c: ",i,j,name);
				scanf("%f",&temp[i][j]);
			}
		}
	return;
}

void matrixmultiplier(int input1,int input2,int s,float a[40][40],float b[40][40],float c[40][40])
{
	int i,j,k;
	float sum;
	
	for (i=1;i<=input1;i++)
	{
		for (j=1;j<=input2;j++)
		{
			sum = 0;
			for (k=1;k<=s;k++)
			{
				sum+= a[i][k]*b[k][j];
			}
			c[i][j] = sum;
		}
	}
	return;
}

void matrixdisplayer(int input1,int input2,char name,float temp[40][40])
{
	int i,j;
	for (i=1;i<=input1;i++)
	{
		for (j=1;j<=input2;j++)
		{
			printf("\n\rElement%2d,%2d of matrix %c is: %f ",i,j,name,temp[i][j]);
		}
	}
	return;
}
