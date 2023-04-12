#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, sum;
	sum = 0;
	for (i = 0; i < 11; i++)
	{
		sum += i;
	}
	printf("1+2+3+...+10=%d\n",sum);

	/////////////

	int count;
	count = 0;
	for (i = 0; i < 10000; i++)
	{
		if ((rand() % 6 + 1)==3)		 /* 產生 [min , max] 的整數亂數 *//* int x = rand() % (max - min + 1) + min */
		{
			count ++;
		}
	}
	printf("骰10000次骰子出現3的機率為%.4f\n", (float)count / 10000);
	// %6 產生0~5的餘數 要+1 補6出來
	return 0;
}