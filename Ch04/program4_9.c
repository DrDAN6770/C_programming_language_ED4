#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/* ��X��J�r������� */
/* getchar()�Bputchar()�Bgetche()�Bgetch() */
/*
�r���ܼ�=getchar(); Ū���r���A�N�L�]���r���ܼ�
putchar(�r���ܼ�);  �N�r���ܼƪ����e�L�X
*/

int main(void)
{
	char ch;
	printf("�п�J�@�Ӧr��: ");
	ch = getchar();

	printf("�z��J���r���O: ");
	putchar(ch);
	putchar('\n');
	return 0;
}
//�п�J�@�Ӧr��: a
//�z��J���r���O : a