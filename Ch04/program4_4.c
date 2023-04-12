/*
如果%c前面沒有空格，%c只能接收一個字元
打了空白則顯示 32(ASCII的空白)
如果想讀地一個不是空白的字元 可以加空白在%c前面
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch,ch1;

	printf("Input a character1:");
	scanf_s("%c", &ch);
	printf("ch=%c, ASCII code is %d\n\n", ch, ch);


	printf("Input a character2:\n");
	scanf_s(" %c", &ch1);
	printf("ch=%c, ASCII code is %d\n", ch1, ch1);

	return 0;
}

//Input a character1 : c
//ch = c, ASCII code is 99
//
//Input a character2 :
//a
//ch = a, ASCII code is 97