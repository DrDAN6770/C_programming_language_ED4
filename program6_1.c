#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// if
// else if
int main(void)

{
	int num;
	printf("��J���: ");
	scanf("%d",&num);

	if (num > 0)
		printf("%d�j��0\n", num);
	else
		if (num == 0)
			printf("%d����0\n", num);
		else
			printf("%d�p��0\n",num);

	printf("�����o\n\n");

	

	printf("��J���: ");
	scanf("%d", &num);
	
	if (num % 2 == 0)
		printf("%d��Q2�㰣,�ҥH%d�O����\n\n", num, num);
	else
		printf("%d����Q2�㰣�A�ҥH%d�O�_��\n\n",num,num);

	printf("��J���: ");
	scanf("%d", &num);

	if (num%2!=0)
		printf("%d����Q2�㰣,�ҥH%d�O�_��\n", num, num);
	else
		printf("%d��Q2�㰣�A�ҥH%d�O����\n", num, num);


	return 0;
}

//��J���: 10
//10�j��0
//�����o
//
//��J��� : 10
//10��Q2�㰣, �ҥH10�O����
//
//��J��� : 9
//9����Q2�㰣, �ҥH9�O�_��