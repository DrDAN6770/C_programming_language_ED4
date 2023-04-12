#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-24
	int i, sum;
	i = 0; sum = 0;
start:
	i++;
	//printf("%d\n", i);
	if (i < 100)
	{
		if (i & 2 != 0)
		{
			sum += i;
			goto start;
		}
		else
			goto start;
	}
		printf("1~100之間的奇數和為%d\n", sum);
	return 0;
}