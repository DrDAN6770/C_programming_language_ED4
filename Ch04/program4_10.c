#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// �r���ܼ� = getche(); Ū���r�������
// �r���ܼ� = getch(); Ū���r�������
// ��J�̤��ݭn��enter�Ae�N��echo�A�O�_�^�Ǩ�ù�

int main(void)
{
	char ch;
	printf("�п�J�@�Ӧr��: ");
	ch = getche();
	printf("\n�A��J���r���O: %c\n",ch);

	printf("�п�J�@�Ӧr���G: ");
	ch = getch();
	printf("\n�A��J���r���G�O: %c\n", ch);

	return 0;
}

//�п�J�@�Ӧr��: a
//�A��J���r���O : a
//�п�J�@�Ӧr���G :
//�A��J���r���G�O: b