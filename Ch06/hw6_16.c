#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-25
	int year = 1900-1;
YEAR4:
	year++;
	if (year <= 2000)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0 && year % 4000 != 0)
		{
			printf("%d\n", year);
			goto YEAR4;
		}
		else
			goto YEAR4;
	}
	printf("1900~2000中，以上這些年是閏年\n");

	return 0;
}