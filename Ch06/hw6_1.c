#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;

	printf("�п�J�r���μƦr:");
	scanf("%c",&ch);
	printf("���r���O %c, ASCII is %d\n", ch,ch);

	if(57>=(int)ch &&  48 <=(int)ch)
	{
		printf("%c, ���r���O�Ʀr\n",ch);

	}
	if (90 >= (int)ch && (int)ch >= 65 || 122 >= (int)ch&& (int)ch >= 97)
	{
		printf("%c, ���r���O�^��\n",ch);;
	}
	return 0;
}

//�п�J�r���μƦr:6
//���r���O 6, ASCII is 54
//6, ���r���O�Ʀr