#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//�_�����c(nested loops)
/*
int main(void)
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d*%d=%d\t", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
*/
int main(void)
{
	int i=1, j=1;
	
	while (i <= 9)
	{
		while (j <= 9)
		{
			printf("%d*%d=%d\t", i, j, i * j);
			j++;
		}
		printf("\n");
		i++;
		j = 1;									// ��j=1�~�^�U�@�Ӥ��魫��
	}
	return 0;
}