#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// ���Y�B��l if
// == ����
// != ������

int main(void)
{
	if (5 > 2)
		printf("5 > 2 ����\n");
		printf("%d\n\n",5>2);
	if (1)							// 1:true, if���P�_���G�|���ߡA���u�n�O�D0�ƭ�(int�Bfloat)������
		printf("����@�w����\n");
	if (0.5)
		printf("0.5 �o��]�@�w����\n\n");
	if (3 == 8)\
		printf("3=8 ����\n");
		printf("%d\n", 3 == 8);


	return 0;
}

//5 > 2 ����
//1
//
//����@�w����
//0.5 �o��]�@�w����
//
//0