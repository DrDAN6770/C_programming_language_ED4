/*
����ǦC
\a ĵ�i�� alert
\b �˰h�@�� backspace
\n ���� new line
\r �k�� carriage return
\0 �r�굲���r�� null character
\t ����tab
\\ �ϱ׽ubackslash
\' ��޸� single quote
\" ���޸� double quote
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