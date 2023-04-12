#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-13
	int month;
	printf("輸入月份: ");
	scanf("%d", &month);
	if (month > 0 && month <= 12)
	{
		if (month <= 2 || month == 12)
			printf("%d 月是冬天\n", month);
		else if (month >= 3 && month <= 5)
			printf("%d 月是春天\n", month);
			else if (month >= 6 && month <= 8)
				printf("%d 月是夏天\n", month);
			else
				printf("%d 月是秋天\n", month);
	}
	else
		printf("error input month\n");
	return 0;
}

//輸入月份: 12
//12 月是冬天