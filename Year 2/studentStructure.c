#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct strDate
{
	int		nDay;
	int		nMnth;
	int		nYear;
};

struct strStudent
{
	char		arcSurname[30];
	char		arcForename1[30];
	char		arcForename2[30];
	struct strDate	strDOB;
	char 		arcGender[30];
	char 		arcHomeNameOrNumber[30];
	char 		arcHomeStreet[30];
	char 		arcHomeTown[30];
	char 		arcHomePostcode[6];
	char 		arcLocalAddNameOrNumber[30];
	char 		arcLocalAddStreet[30];
	char 		arcLocalAddTown[30];
	char 		arcLocalAddPostcode[6];
	char 		arcAwardTitle[30];
	struct strDate	strDateOfEnrolment;
	struct strDate	strDateOfGraduation;
	char 		arcRegistrationNumber[30];
};

int viewDetails()
{
        printf("VIEWDETAILS");
}

int amendDetails()
{
        printf("AMENDDETAILS");
}

int search()
{
        printf("SEARCH");
}

int saveData()
{
        printf("SAVEDATA");
}

int loadData()
{
        printf("LOADDATA");
}

int exitProgram()
{
        exit(0);
}

int main(void)
{
	struct strStudent rangeStudent[50];
	int i;
	for (i=0; i<51; ++i){
		strcpy(rangeStudent[i].arcSurname, "NULL");
	}
	while (1==1){
	     	int menuChoice = 0;
   	     	printf("\nMenu\n"
        	"1) Enter Details\n"
        	"2) View Details\n"
        	"3) Amend Details\n"
        	"4) Search\n"
        	"5) Save Data to File\n"
       	 	"6) Load Data from File\n"
        	"7) Exit\n");
        	scanf("%d",&menuChoice);
     	
		if (menuChoice == 1){
                int i;
                int nextEmptyArray;
		        for (i=0; i<51; ++i){
               			if (strcmp("NULL",rangeStudent[i].arcSurname)==0){
                        		nextEmptyArray = i;
					/*printf("Array %d is empty",i);
					printf("Set nextEmptyArray to %d",nextEmptyArray);*/
					break;
					}
				/*printf("Array entry is %s",rangeStudent[i].arcSurname);*/
				}
			printf("\n\nData Entry\n");
			printf("\nPlease enter Surname: ");
			scanf(" %[^\n]s",&rangeStudent[nextEmptyArray].arcSurname);
			printf("\nPlease enter Forename 1: ");
			scanf(" %[^\n]s",&rangeStudent[nextEmptyArray].arcForename1);
			printf("\nPlease enter Forname 2: ");
			scanf(" %[^\n]s",&rangeStudent[nextEmptyArray].arcForename2);
			printf("\nPlease enter the DAY of Birth: ");
			scanf(" %[^\n]d",&rangeStudent[nextEmptyArray].strDOB.nDay);
			printf("\nPlease enter the MONTH of Birth: ");
            scanf(" %[^\n]d",&rangeStudent[nextEmptyArray].strDOB.nMnth);
			printf("\nPlease enter the YEAR of Birth: ");
            scanf(" %[^\n]d",&rangeStudent[nextEmptyArray].strDOB.nYear);
			printf("\nPlease enter Gender: ");
            scanf(" %[^\n]s",&rangeStudent[nextEmptyArray].arcGender);
			printf("\nPlease enter Home Name or Number: ");
            scanf(" %[^\n]s",&rangeStudent[nextEmptyArray].arcHomeNameOrNumber);
			printf("\nPlease enter Home Road Name: ");
            scanf(" %[^\n]s",&rangeStudent[nextEmptyArray].arcHomeStreet);
			printf("\nPlease enter Home Town Name: ");
            scanf(" %[^\n]s",&rangeStudent[nextEmptyArray].arcHomeTown);
			printf("\nPlease enter Home Post Code: ");
            scanf(" %[^\n]s",&rangeStudent[nextEmptyArray].arcHomePostcode);
			printf("\nPlease enter Local Address Name or Number: ");
            scanf(" %[^\n]s",&rangeStudent[nextEmptyArray].arcLocalAddNameOrNumber);
			printf("\nPlease enter Local Address Road Name: ");
            scanf(" %[^\n]s",&rangeStudent[nextEmptyArray].arcLocalAddStreet);
			printf("\nPlease enter Local Address Town Name: ");
            scanf(" %[^\n]s",&rangeStudent[nextEmptyArray].arcLocalAddTown);
			printf("\nPlease enter Local Address Post Code: ");
            scanf(" %[^\n]s",&rangeStudent[nextEmptyArray].arcLocalAddPostcode);
			printf("\nPlease enter Award Title: ");
			scanf(" %[^\n]s",&rangeStudent[nextEmptyArray].arcAwardTitle);
			printf("\nPlease enter the DAY of Enrolment: ");
			scanf(" %[^\n]d",&rangeStudent[nextEmptyArray].strDateOfEnrolment.nDay);
			printf("\nPlease enter the MONTH of Enrolment: ");
            scanf(" %[^\n]d",&rangeStudent[nextEmptyArray].strDateOfEnrolment.nMnth);
			printf("\nPlease enter the YEAR of Enrolment: ");
            scanf(" %[^\n]d",&rangeStudent[nextEmptyArray].strDateOfEnrolment.nYear);
            printf("\nPlease enter the DAY of Graduation: ");
			scanf(" %[^\n]d",&rangeStudent[nextEmptyArray].strDateOfGraduation.nDay);
			printf("\nPlease enter the MONTH of Graduation: ");
            scanf(" %[^\n]d",&rangeStudent[nextEmptyArray].strDateOfGraduation.nMnth);
			printf("\nPlease enter the YEAR of Graduation: ");
            scanf(" %[^\n]d",&rangeStudent[nextEmptyArray].strDateOfGraduation.nYear);
			printf("\nPlease enter the Registration Number: ");
            scanf(" %[^\n]d",&rangeStudent[nextEmptyArray].arcRegistrationNumber);
            
            
        	printf("Array entry is %s\n",rangeStudent[nextEmptyArray].arcSurname);
        	printf("Array entry is %s\n",rangeStudent[nextEmptyArray].arcForename1);
        	printf("Array entry is %s\n",rangeStudent[nextEmptyArray].arcForename2);
        	printf("Array entry is %d\n",rangeStudent[nextEmptyArray].strDOB.nDay);
        	printf("Array entry is %d\n",rangeStudent[nextEmptyArray].strDOB.nMnth);
        	printf("Array entry is %d\n",rangeStudent[nextEmptyArray].strDOB.nYear);
        	printf("Array entry is %s\n",rangeStudent[nextEmptyArray].arcGender);
        	printf("Array entry is %s\n",rangeStudent[nextEmptyArray].arcHomeNameOrNumber);
        	printf("Array entry is %s\n",rangeStudent[nextEmptyArray].arcHomeStreet);
        	printf("Array entry is %s\n",rangeStudent[nextEmptyArray].arcHomeTown);
        	printf("Array entry is %s\n",rangeStudent[nextEmptyArray].arcHomePostcode);
        	printf("Array entry is %s\n",rangeStudent[nextEmptyArray].arcLocalAddNameOrNumber);
        	printf("Array entry is %s\n",rangeStudent[nextEmptyArray].arcLocalAddStreet);
        	printf("Array entry is %s\n",rangeStudent[nextEmptyArray].arcLocalAddTown);
        	printf("Array entry is %s\n",rangeStudent[nextEmptyArray].arcLocalAddPostcode);
        	printf("Array entry is %s\n",rangeStudent[nextEmptyArray].arcAwardTitle);
        	printf("Array entry is %d\n",rangeStudent[nextEmptyArray].strDateOfEnrolment.nDay);
        	printf("Array entry is %d\n",rangeStudent[nextEmptyArray].strDateOfEnrolment.nMnth);
        	printf("Array entry is %d\n",rangeStudent[nextEmptyArray].strDateOfEnrolment.nYear);
        	printf("Array entry is %d\n",rangeStudent[nextEmptyArray].strDateOfGraduation.nDay);
        	printf("Array entry is %d\n",rangeStudent[nextEmptyArray].strDateOfGraduation.nMnth);
        	printf("Array entry is %d\n",rangeStudent[nextEmptyArray].strDateOfGraduation.nYear);
        	printf("Array entry is %d\n",rangeStudent[nextEmptyArray].arcRegistrationNumber);
        	
            
       		}
       		else if (menuChoice == 2){
                	viewDetails();
        	}
        	else if (menuChoice == 3){
                	amendDetails();
        	}
        	else if (menuChoice == 4){
                	search();
        	}
        	else if (menuChoice == 5){
                	saveData();
        	}
        	else if (menuChoice == 6){
                	loadData();
        	}
        	else if (menuChoice == 7){
                	exitProgram();
        	}
        	else{
                	printf("\nIncorrect Entry\n");
              	}
	}
}

