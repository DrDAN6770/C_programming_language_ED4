/*
�bDOS or Windows�����ҤU��enter
�|�Q������carriage return �٦� line feed�o��Ӱʧ@�A�N��O�k��CR�δ���LF
�k��(ASCII=13) >> �P�C��в��ʨ�̥���
����(ASCII=10) >> ��в��ʨ�U�@��
��J������Uenter��>scanf������num��>�����k��A�N������w�İ�>�U�@�ӿ�J�N�w�İϪ�����Ū�J>�L�X����

%c�e���[�Ů�A�i�H���L���i�C�L�r��
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	char ch;

	printf("�п�J�@�Ӿ��:");
	scanf("%d", &num);
	printf("�п�J�@�Ӧr��:");
	scanf(" %c", &ch);

	printf("num = %d , ASCII of ch = %d\n",num,ch);
	return 0;

}

//�п�J�@�Ӿ��:5
//�п�J�@�Ӧr�� : a
//num = 5, ASCII of ch = 97