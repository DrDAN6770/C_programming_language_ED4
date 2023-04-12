#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
		printf("請輸入一數字: ");
		scanf("%d",&num);
		if (num >= 0)
			if (num < 10)
				printf("0 < %d < 10\n",num);
			else
				printf("%d >= 10\n",num);

		printf("請輸入一數字: ");
		scanf("%d", &num);
		if (num >= 0)
		{
			if (num < 10)
				printf("0 < %d < 10", num);
		}
		else
			printf("%d >= 10", num);
	return 0;
}