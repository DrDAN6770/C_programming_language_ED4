#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/* 輸出輸入字元的函數 */
/* getchar()、putchar()、getche()、getch() */
/*
字元變數=getchar(); 讀取字元，將他設給字元變數
putchar(字元變數);  將字元變數的內容印出
*/

int main(void)
{
	char ch;
	printf("請輸入一個字元: ");
	ch = getchar();

	printf("您輸入的字元是: ");
	putchar(ch);
	putchar('\n');
	return 0;
}
//請輸入一個字元: a
//您輸入的字元是 : a