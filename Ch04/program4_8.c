#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	char ch;

	printf("�п�J���:");
	scanf("%d",&num);
	/*fflush(stdin);*/
	rewind(stdin);

	printf("�п�J�r��:");
	scanf("%c",&ch);

	printf("num=%d, ASCII of ch = %d\n", num, ch);
	return 0;
}

//�п�J���:2330
//�п�J�r�� : k
//num = 2330, ASCII of ch = 107