#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, sum;
	sum = 0;
	for (i = 0; i < 11; i++)
	{
		sum += i;
	}
	printf("1+2+3+...+10=%d\n",sum);

	/////////////

	int count;
	count = 0;
	for (i = 0; i < 10000; i++)
	{
		if ((rand() % 6 + 1)==3)		 /* ���� [min , max] ����ƶü� *//* int x = rand() % (max - min + 1) + min */
		{
			count ++;
		}
	}
	printf("��10000����l�X�{3�����v��%.4f\n", (float)count / 10000);
	// %6 ����0~5���l�� �n+1 ��6�X��
	return 0;
}