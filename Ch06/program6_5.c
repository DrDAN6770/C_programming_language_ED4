#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//switch
//case(��ܭ�):				��ܭȥu�ড��Ʊ`�ƩΦr��
//break						�����break�N���Xswitch
//�ѰO+break�|�����swich�ԭz���̫�A�v�T���G

int main(void)
{
	int a, b;
	char oper;

	printf("�п�J�B�⦡(ex.3+2): ");
	scanf("%d %c %d",&a,&oper,&b);

	switch (oper)
	{
		case '+':
			printf("%d+%d=%d\n", a, b, a + b);
			break;
		case '-':
			printf("%d-%d=%d\n", a, b, a - b);
			break;
		case '*':
			printf("%d*%d=%d\n", a, b, a * b);
			break;
		case '/':
			printf("%d/%d=%.3f\n", a, b,(float)a / b);
			break;
		default:
			printf("�L�k��{���⦡!!\n");
	}
	return 0;
}