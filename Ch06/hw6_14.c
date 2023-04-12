#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-23
	int day;
	printf("輸入1~7的數字: ");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("今天要上班\n");
		break;
	case 6:
	case 7:
		printf("今天休息\n");
		break;
	default:
		printf("input error\n");

	}
	return 0;
}