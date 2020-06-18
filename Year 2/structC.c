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
	struct strEmployee arstrEmps[50];

	strcpy(arstrEmps[50].arcSurname, "Hodgkiss");
	arstrEmps[50].strDOB.nDay = 4;
	arstrEmps[50].strDOB.nMnth = 8;
	arstrEmps[50].strDOB.nYear = 2014;

	printf("%s was born on %d:%d:%d\n\n", arstrEmps[50].arcSurname,
										  arstrEmps[50].strDOB.nDay,
										  arstrEmps[50].strDOB.nMnth,
										  arstrEmps[50].strDOB.nYear);

	return 0;
}
