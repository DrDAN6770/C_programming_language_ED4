#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int num = 25;
	printf("\"%d%%���ǥͨӦۤp�d�a�x\"\n", num);

	int num1 = 32, num2 = 1024, i = 1234;
	float num3 = 12.3478f;

	printf("num1 = %6d ����\n\n", num1);	/* %6d ��6�� �V�k��� */
	printf("num2 = %-6d ����\n\n", num2);	/* %-6d ��6�� �V����� */
	printf("num3= %6.2f ����\n\n", num3);	/* %6.2f ���Ӧr���e�סA���2�� */
	printf("i=%+08d%\n\n", i);
	/*�ť� = �d�@�Ӫť�(+) or ��ܭt��(-)
	0 =�ťճB��0
	+ = ��ܥ��t��*/


	printf("42���K�i��O%o\n", 42);
	printf("42���Q���i��O%x\n", 42);
	/* 16 : 0123456789abcdef */
	return 0;
}

//"25%���ǥͨӦۤp�d�a�x"
//num1 = 32 ����
//
//num2 = 1024   ����
//
//num3 = 12.35 ����
//
//i = +0001234
//
//42���K�i��O52
//42���Q���i��O2a