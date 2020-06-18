/* strtol.c
	Example of how the function strtol can be used to extract
	a decimal value from a string
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char	str[60] = " 12345678 This is a string with a number embedded";
	char	arcBuffer[50];
	char* ptr;
	long	lRetVal;
	int	nBase = 10;

	lRetVal = strtol(str, &ptr, nBase);

	printf("The initial string is: %s\n", str);
	printf("The number is %ld\n", lRetVal);
	printf("The remaining string part is >%s<\n\n", ptr);

	double doublevalue = strtod(str, &ptr);
	float floatvalue = strtof(str, &ptr);
	long double longdoublevalue = strtold(str, &ptr);
	long longvalue = strtol(str, &ptr, nBase);
	long long longlongvalue = strtoll(str, &ptr, nBase);
	unsigned long unsignedlongvalue = strtoul(str, &ptr, nBase);
	unsigned long long unsignedlonglongvalue = strtoull(str, &ptr, nBase);


	printf("String value = %s,\nDouble value = %f\nFloat value = %f\nLong double value = %Le\n", str, doublevalue, floatvalue, longdoublevalue);
	printf("Long value = %ld\nLong Long value = %lld\nUnsigned Long value = %lu\nUnsigned Long Long value = %llu\n", longvalue, longlongvalue, unsignedlongvalue, unsignedlonglongvalue);


	printf("Enter a string: ");
	scanf("%s", arcBuffer);

	lRetVal = strtol(arcBuffer, &ptr, nBase);

	printf("The number is %ld\n", lRetVal);
	printf("The remaining string part is >%s<\n\n", ptr);
	return 0;
}