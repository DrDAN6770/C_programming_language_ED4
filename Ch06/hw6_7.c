#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-11//
	int wage;
	printf("�o�Ӥ�uŪ�ͤu�@�ɼ�(h): ");
	scanf("%d", &wage);
	float salary, h = 75;

	if (wage <= 60)
	{
		salary = wage * h;
	}
	else if (wage >= 61 && wage <= 75)
	{
		salary = 60 * h + 1.25 * h * (wage - 60);
	}
		else
		{
			salary = 60 * h + 1.25 * h * 15 + 1.75 * h * (wage - 75);
		}
	printf("�uŪ�ͳo�Ӥ��~���O%.2f��\n", salary);
	return 0;
}

//�o�Ӥ�uŪ�ͤu�@�ɼ�(h) : 100
//�uŪ�ͳo�Ӥ��~���O9187.50��