#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	///////////6-2//////////
	int n;
	printf("�п�J�@���:");
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
	printf("�п�J�@���:");
	scanf("%d", &n);

	if (n % 2 != 0)
	{
		printf("%d is odd\n", n);
	}
	else
		printf("%d is even\n", n);

	///////////6-4//////////
	printf("�п�J�@���:");
	scanf("%d", &n);
	//printf("%d������ȬO%d\n", n,abs(n));
	if (n>=0)
	{
		printf("%d������ȬO%d\n", n,n);
	}
	else
		printf("%d������ȬO%d\n", n, n*-1);
	return 0;
}

//�п�J�@���:5
//5 > 0
//�п�J�@���:3
//3 is odd
//�п�J�@��� : -6
//- 6������ȬO6