#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//5-11
	float C,F;
	printf("��J���ū�: ");
	scanf("%f",&C);
	F = (float)9/5 * C + 32;				// 9/5�S�૬�A�|���X1
	printf("���ū�%f, �ؤ�ū׬�%f\n\n",C,F);
	
	//5-12
	printf("��J�ؤ�ū�: ");
	scanf("%f", &F);
	C = (float)(F-32)*5/9;
	printf("�ؤ�ū�%f, ���ū׬�%f\n\n", F, C);

	//5-13
	float a, b;
	printf("��J�^��: ");
	scanf("%f", &a);
	b = a * 1.6;
	printf("%f �^�� = %f ����\n\n",a,b);

	//5-14
	printf("��J���� ");
	scanf("%f", &b);
	a = b / 1.6;
	printf("%f ���� = %f �^��\n\n", b, a);

	//5-15
	float x, h, AREA;
	printf("�п�J����|��Ω��P��:\n");
	scanf("%f %f", &x,&h);
	AREA= x * h;
	printf("����|��έ��n = %f \n\n",AREA);

	//5-16
	float r,V;
	printf("�п�J��y�b�|: ");
	scanf("%f", &r);
	V = (float)4/3*3.14*r*r*r;
	printf("��y��n = %f \n\n", V);

	return 0;
}

//��J���ū�: 100
//���ū�100.000000, �ؤ�ū׬�212.000000
//
//��J�ؤ�ū� : 212
//�ؤ�ū�212.000000, ���ū׬�100.000000
//
//��J�^�� : 10
//10.000000 �^�� = 16.000000 ����
//
//��J���� 16
//16.000000 ���� = 10.000000 �^��
//
//�п�J����|��Ω��P�� :
//4 5
//����|��έ��n = 20.000000
//
//�п�J��y�b�| : 3
//��y��n = 113.040001