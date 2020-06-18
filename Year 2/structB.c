#include <stdio.h>
#include <string.h>


struct strDate
{
	int		nDay;
	int		nMnth;
	int		nYear;
};

struct strEmployee
{
	char			arcSurname[30];
	char			arcForename1[30];
	char			arcForename2[30];
	int				nSalary;
	struct strDate	strDOB;
	struct strDate	strStartDate;
};


int main(void)
{
	struct strEmployee	Emp1;
	struct strEmployee	Emp2;

	strcpy(Emp1.arcSurname, "Hodgkiss");
	Emp1.strDOB.nDay = 4;
	Emp1.strDOB.nMnth = 8;
	Emp1.strDOB.nYear = 2014;

	printf("%s was born on %d:%d:%d\n\n", Emp1.arcSurname, 
										  Emp1.strDOB.nDay, 
										  Emp1.strDOB.nMnth, 
										  Emp1.strDOB.nYear);



	return 0;
}
