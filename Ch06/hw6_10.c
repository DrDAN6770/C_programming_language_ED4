#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-14
	int year;
	printf("輸入西元年:");
	scanf("%4d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) && (year % 4000 != 0))
		printf("%d是閏年\n", year);
	else
		printf("%d不是閏年\n", year);
	return 0;
}