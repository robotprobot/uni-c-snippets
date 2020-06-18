#include <stdio.h>

int a, b, c;

int main()
{
	printf("\nPlease enter first element value: ");
	scanf("%d", &a);
	printf("\nPlease enter second element value: ");
	scanf("%d", &b);
	printf("\nPlease enter third element value: ");
	scanf("%d", &c);

	printf("\n%d, %d, %d", a, b, c);

	swap(&a, &b, &c);

	printf("\n%d, %d, %d\n", a, b, c);
}

int swap(int *ptr1, int *ptr2, int *ptr3) // a b c --> c a b
{
	int temp;
	
	temp = *ptr1;
	*ptr1 = *ptr3;
	*ptr3 = temp;
	temp = *ptr2;
	*ptr2 = *ptr3;
	*ptr3 = temp;
}

