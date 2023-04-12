#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// do while
// 先做主體 再做判斷，所以至少會執行一次
/*
do
{
	主體;
	增量;
}while(判斷);		>>>有分號
*/
int main(void)
{
	int n, i, sum;
	i = 0, sum = 0;
	do
	{
		printf("請輸入n值(>0): ");
		scanf("%d", &n);
	}while (n <= 0);
	
	do
	{
		sum += i++;			// sum=sum+i,再i++ 等於 sum+=i;i++;
	} while (i <= n);
	printf("0+1+2+...+%d=%d\n", n, sum);

	i = 0, sum = 0;
	RE_for:
	printf("請輸入n值(>0): ");
	scanf("%d", &n);
	if (n > 0)
	{
		for (i; i <= n; i++)
		{
			sum += i;
		}
	}
	else
		goto RE_for;
	printf("0+1+2+...+%d=%d\n", n, sum);

	return 0;
}

//請輸入n值(> 0) : 5
//0 + 1 + 2 + ... + 5 = 15
//請輸入n值(> 0) : 10
//0 + 1 + 2 + ... + 10 = 55