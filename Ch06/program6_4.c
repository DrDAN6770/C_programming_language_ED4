#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//²�u����if-else (C)
// ���� ? �B�⦡1 : �B�⦡2 >> true for �B�⦡1 false for �B�⦡2
// �ܼƦW�� = ����P�_ ? �B�⦡1 : �B�⦡2 >> �B�⵲�G�]���Y���ܼƦs��A�N��p�U
/*

if(����)
	n = �B1
else
	n = �B2
*/

int main(void)
{
	int n1, n2, larger;
	printf("��J����:");
	scanf("%d %d", &n1, &n2);

	//n1 > n2 ? (larger = n1) : (larger = n2);
	larger = n1 > n2 ? n1 : n2;
	printf("%d ����j\n", larger);

	return 0;
}

//��J����:120 20
//120 ����j