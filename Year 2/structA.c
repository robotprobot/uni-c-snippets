#include <stdio.h>

struct strEmployee
{
	char	arcSurname[30];
	char	arcForename1[30];
	char	arcForename2[30];
	int		nSalary;
	int		nDayOfBirth;
	int		nMnthOfBirth;
	int		nYearOfBirth;
};


int main(void)
{
	struct strEmployee	Emp1;
	struct strEmployee	Emp2;

	strcpy(Emp1.arcSurname, "Hodgkiss");

	printf("%s\n\n", Emp1.arcSurname);



	return 0;
}
