/*	SPC++ Example Code
	queue.c

	Queue Data Stucture utilising a linked list
	Items will be added to the rear of the queue and
	removed from the front.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"

/* Function Protypes */
char fnMenu(void);
QUEUE* fnAddItem(QUEUE**, QUEUE*);
QUEUE* fnRemoveItem(QUEUE*, QUEUE*);
void fnPrintQueue(QUEUE*);

int main(void)
{
	int nRun = 1;
	char nChoice;
	char cDummy;
	QUEUE* ptrFront = NULL;
	QUEUE* ptrRear = NULL;

	while (nRun)
	{
		/* The following line has been added to output the addresses
		   of the two main pointers
		*/
		printf("\nFront is %p, Rear is %p\n", ptrFront, ptrRear);

		nChoice = fnMenu();

		switch (nChoice)
		{
		case '1':	/* Add Item */
			ptrRear = fnAddItem(&ptrFront, ptrRear);
			break;

		case '2':	/* Remove Item */
			ptrFront = fnRemoveItem(ptrFront, ptrRear);
			break;

		case '3':	/* Print Queue */
			fnPrintQueue(ptrFront);
			break;

		case '4':	/* Quit */
			printf("\t\tProgramming Terminating\n\n");
			nRun = 0;
			break;
		}
	}

	return 0;
}

QUEUE* fnAddItem(QUEUE** ptrF, QUEUE* ptrR)
{
	/* This function will add an item to the rear of the queue */
	char arcInput[50];
	QUEUE* ptrTemp;
	QUEUE** ptrPF;

	ptrPF = ptrF;

	printf("Please enter a word :");
	scanf("%s", arcInput);
	fflush(stdin);			/* Clear any unwanted characters from the input buffer */

	if (ptrR == NULL)		/* Queue is empty */
	{
		ptrR = (QUEUE*)malloc(sizeof(QUEUE));
		if (!ptrR)
		{
			/* malloc has failed - exit */
			printf("\nmalloc has failed to create first item - program terminating\n");
			exit(1);
		}

		*ptrPF = ptrR;
		ptrR->ptrNext = NULL;
		strcpy(ptrR->arcWord, arcInput);
	}
	else					/* Queue is already formed - just add to end */
	{
		ptrTemp = *ptrF;
		ptrR = (QUEUE*)malloc(sizeof(QUEUE));
		if (!ptrR)
		{
			printf("malloc has failed to add new item - program terminating\n");
			exit(1);
		}

		ptrR->ptrNext = NULL;
		strcpy(ptrR->arcWord, arcInput);
		ptrTemp->ptrNext = ptrR;
	}

	return ptrR;
}

char fnMenu(void)
{
	char nOpt[10];


	//system("clear");	/* UNIX call - change for Windows */

	printf("\n\nQueue System - using a linked list\n");
	printf("Options\n\t1. Add Item to rear\n\t2. Remove Item from front\n\t3. Print Queue\n\t4. Quit\n\n");
	printf("Please enter your choice :");
	scanf("%s", nOpt);

	return nOpt[0];
}

void fnPrintQueue(QUEUE* ptrFront)
{
	/* 	Print Queuse
		Works on the assumption that the last item
		within the queue has ptrNext == NULL;
	*/

	printf("Print Queue\n\n");

	if (!ptrFront)
	{
		printf("Err - empty queue\n\n");
	}
	else
	{
		while (ptrFront)
		{
			printf("%s\n", ptrFront->arcWord);
			ptrFront = ptrFront->ptrNext;
		}
	}
}

QUEUE* fnRemoveItem(QUEUE* ptrF, QUEUE* ptrR)
{
	if (ptrR == NULL) {
		printf("Cannot delete, queue is empty.");
	}
	else 
	{
		// Remove item from queue
		ptrF = ptrF->ptrNext;
	}
	
	return ptrF;
}