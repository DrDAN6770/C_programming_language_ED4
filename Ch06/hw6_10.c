#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-14
	int year;
	printf("��J�褸�~:");
	scanf("%4d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) && (year % 4000 != 0))
		printf("%d�O�|�~\n", year);
	else
		printf("%d���O�|�~\n", year);
	return 0;
}