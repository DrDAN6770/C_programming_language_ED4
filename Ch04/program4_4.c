/*
�p�G%c�e���S���Ů�A%c�u�౵���@�Ӧr��
���F�ťիh��� 32(ASCII���ť�)
�p�G�QŪ�a�@�Ӥ��O�ťժ��r�� �i�H�[�ťզb%c�e��
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