#include <stdio.h>
#include <stdlib.h>

/*
long int == 4 bytes
short int == 2
int == 4 (32767~-32767)
chart == 1 (0~255,256�Ӧr��)\
float == 4
double == 8
*/

/*
�L�����
���|�X�{�t��
�x�s�d��q0�}�l
�֭쥻���t�ƽd��
*/

int main(void)
{
	int num1 = 12400;
	double num2 = 5.234;
	long num3 = 124000L;	/* L �N���Ƭ�����Ʊ`�� */
	short num4 = 0;
	
	printf("%d is an integer\n", num1);		/* 4 bytes ���O����Ŷ��s�x���ܼ� */
	printf("%f is a double\n", num2);		/* 8 bytes ���O����Ŧs���ܼ� */
	printf("%d is a long\n", num3);		/* 4 bytes ���O����Ŧs���ܼ� */
	printf("%d is a short\n", num4);		/* 2 bytes ���O����Ŧs���ܼ� */

	return 0;
}

/*
12400 is an integer
5.234000 is a double
124000 is a long
0 is a short
*/