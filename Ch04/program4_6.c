#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


/* scanfŪ���覡 */
/*
�|��Ĥ@�ӫD�ťզr��
�p�GŪ�J���ƭȤ��ᦳ��L�r���A�h�|��@�U�@���n��J�ҭnŪ�������(��b�w�İ�,buffer)
�w�İϸ�Ʒ|��Ū���A�e���y��Ū����ƿ��~

Ū���w�İϤ��ݯd�����
*/

/*
input = �ť�*4 + 1250 + dollars
*/

int main(void)
{
	int num;
	char str[10];

	printf("�п�J�@�Ӿ��:");
	scanf("%d", &num);
	printf("num=%d\n", num);

	printf("�п�J�r��:");
	scanf("%s", str);
	printf("str = %s\n", str);

	return 0;
}

//�п�J�@�Ӿ��:5
//num = 5
//�п�J�r�� : abc
//str = abc