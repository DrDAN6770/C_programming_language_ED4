#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//6-5//
	int weight;
	printf("��J�魫: ");
	scanf("%d",&weight);

	(weight > 90) ? printf("�L��\n") : printf("�S�L��\n");

	//6-6//
	int hight;
	printf("��J�����魫: ");
	scanf("%d %d",&hight ,&weight);
	(weight > 90 && hight < 180) ? printf("�L��\n") : printf("�S�L��\n");

	//6-7//
	int a, b, c;
	printf("��J�T�������: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && b + c > a && a + c > b)
		printf("%d,%d,%d ��c���T����\n", a,b,c);
	else
		printf("%d,%d,%d ����c���T����\n", a, b, c);
	return 0;
}

//��J�魫: 65
//�S�L��
//��J�����魫 : 170 65
//�S�L��
//��J�T������� : 3 5 4
//3, 5, 4 ��c���T����