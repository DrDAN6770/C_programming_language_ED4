#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j, n;
	printf("�п�J�T���ΰ���: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//�п�J�T���ΰ���: 3
//*
//**
//***