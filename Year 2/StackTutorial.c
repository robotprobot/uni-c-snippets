/*	SPC++

	Stack Example
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

/* Function prototypes */
STACK* fnPushItem(char*, STACK*);
void fnPrintStack(STACK*);
STACK* fnPopItem(char*, STACK*);

int main(int argc, char* argv[])
{
	char arcInput[50];
	char arcEnd[] = "END";
	STACK* ptrHead = NULL;
	int	nRun = 1;
	int nTest;

	while (nRun)
	{
		printf("Enter a word (\"%s\") to terminate: ", arcEnd);
		fgets(arcInput, 49, stdin);

		if (strncmp(arcEnd, arcInput, strlen(arcEnd)))
		{
			/* Input is not "END" */
			printf("Adding word\n");
			ptrHead = fnPushItem(arcInput, ptrHead);
		}
		else
		{
			printf("END\n");
			nRun = 0;
		}

	}

	while (ptrHead)
	{
		ptrHead = fnPopItem(arcInput, ptrHead);
	}

	printf("\nThe stack is now empty\n");

	return 0;
}

/* Function Definitions */
STACK* fnPushItem(char* ptrWord, STACK* ptrHead)
{
	/*	This function accepts the data input via a pointer along with
		a pointer to the head of the stack.
		A new node is instantiated and added to the head of the stack.
		As this node is now at the head, its address is returned so that
		it can be assigned to ptrHead.
	*/
	STACK* ptrTemp;

	ptrTemp = (STACK*)malloc(strlen(ptrWord));
	if (!ptrTemp)
	{
		printf("malloc has failed - program terminating");
		exit(1);
	}

	strcpy(ptrTemp->arcWord, ptrWord);
	ptrTemp->ptrNext = ptrHead;


	return ptrTemp;
}

void fnPrintStack(STACK* ptrHead)
{
	/* 	Even though the concept of a Stack is that data can only pushed
		or popped in order to interact with the Stack, this function is
		a useful debugging / development tool that will print out the
		stack without altering it
	*/
	while (ptrHead)
	{
		printf("The word is %s\n", ptrHead->arcWord);
		ptrHead = ptrHead->ptrNext;
	}

	return;
}


STACK* fnPopItem(char* arcW, STACK* ptrP)
{
	STACK* ptrTemp;

	printf("\t\tIn POP ptrP is currently %p \n", ptrP);

	if ((ptrTemp = ptrP))
	{
		strcpy(arcW, ptrP->arcWord);
		ptrP = ptrTemp->ptrNext;
		free(ptrTemp);
	}
	else
	{
		printf("Nothing to pop\n");
		arcW = NULL;
	}

	printf("Pop about to return/n");

	return ptrP;
}
