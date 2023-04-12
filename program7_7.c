#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j, n;
	printf("請輸入三角形高度: ");
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

//請輸入三角形高度: 3
//*
//**
//***