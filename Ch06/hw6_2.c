#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	///////////6-2//////////
	int n;
	printf("請輸入一整數:");
	scanf("%d", &n);

	if (n > 0)
	{
		printf("%d > 0\n", n);
	}
	else if (n == 0)
	{
		printf("%d = 0\n", n);
	}
	else
		printf("%d < 0\n", n);

	///////////6-3//////////
	printf("請輸入一整數:");
	scanf("%d", &n);

	if (n % 2 != 0)
	{
		printf("%d is odd\n", n);
	}
	else
		printf("%d is even\n", n);

	///////////6-4//////////
	printf("請輸入一整數:");
	scanf("%d", &n);
	//printf("%d的絕對值是%d\n", n,abs(n));
	if (n>=0)
	{
		printf("%d的絕對值是%d\n", n,n);
	}
	else
		printf("%d的絕對值是%d\n", n, n*-1);
	return 0;
}

//請輸入一整數:5
//5 > 0
//請輸入一整數:3
//3 is odd
//請輸入一整數 : -6
//- 6的絕對值是6