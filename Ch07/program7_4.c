#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// do while
// �����D�� �A���P�_�A�ҥH�ܤַ|����@��
/*
do
{
	�D��;
	�W�q;
}while(�P�_);		>>>������
*/
int main(void)
{
	int n, i, sum;
	i = 0, sum = 0;
	do
	{
		printf("�п�Jn��(>0): ");
		scanf("%d", &n);
	}while (n <= 0);
	
	do
	{
		sum += i++;			// sum=sum+i,�Ai++ ���� sum+=i;i++;
	} while (i <= n);
	printf("0+1+2+...+%d=%d\n", n, sum);

	i = 0, sum = 0;
	RE_for:
	printf("�п�Jn��(>0): ");
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

//�п�Jn��(> 0) : 5
//0 + 1 + 2 + ... + 5 = 15
//�п�Jn��(> 0) : 10
//0 + 1 + 2 + ... + 10 = 55