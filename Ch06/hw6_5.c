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
		printf("學生%d的成績: ",i+1);
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
	printf("\nA有%d人\nB有%d人\nC有%d人\n", A, B, C);
	return 0;
}