#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	char ch;

	printf("請輸入一個整數: ");
	scanf("%d",&num);
	rewind(stdin);

	printf("請輸入一個字元: ");
	ch = getchar();
	printf("num=%d, ASCII of ch = %d\n\n",num,ch);	//4-19

	
	char ch1;
	printf("請輸入一個字元: ");
	ch1 = getche();
	printf("\n輸入的字元是");
	putchar(ch1);
	putchar('\n');
	putchar('\n');

	printf("請輸入一個字元: ");
	ch1 = getch();
	printf("\n輸入的字元是");
	putchar(ch1);
	putchar('\n\n');								//4-20

	return 0;
}

//請輸入一個整數: 10
//請輸入一個字元 : a
//num = 10, ASCII of ch = 97
//
//請輸入一個字元 : b
//輸入的字元是b
//
//請輸入一個字元 :
//輸入的字元是c