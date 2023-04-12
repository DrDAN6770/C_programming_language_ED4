/*
跳脫序列
\a 警告音 alert
\b 倒退一格 backspace
\n 換行 new line
\r 歸位 carriage return
\0 字串結束字元 null character
\t 跳格tab
\\ 反斜線backslash
\' 單引號 single quote
\" 雙引號 double quote
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char x = '\a';
	int y = 0;
	char z = '\"';

	/* printf("%c\n", x); */

	printf("%d\a\n", y);
	printf("\"We are the world\"\n");
	printf("%cWe are the world%c\n",z,z);
	return 0;
}

//0
//"We are the world"
//"We are the world"