#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//6-9//
	int g;
	int A, B, C;
	int i;

	i = 0; A = 0; B = 0; C = 0;
	for (i; i < 10; i++)
	{
		printf("�ǥ�%d�����Z: ",i+1);
		scanf("%d",&g);

		if (g >= 76 && g <= 100)
		{
			A++;
		}
		else if (g >= 60 && g <= 75)
		{
			B++;
		}
		else
			C++;
	}
	printf("\nA��%d�H\nB��%d�H\nC��%d�H\n", A, B, C);
	return 0;
}