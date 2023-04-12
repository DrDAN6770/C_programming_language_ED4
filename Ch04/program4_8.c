#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	char ch;

	printf("請輸入整數:");
	scanf("%d",&num);
	/*fflush(stdin);*/
	rewind(stdin);

	printf("請輸入字元:");
	scanf("%c",&ch);

	printf("num=%d, ASCII of ch = %d\n", num, ch);
	return 0;
}

//請輸入整數:2330
//請輸入字元 : k
//num = 2330, ASCII of ch = 107