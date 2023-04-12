#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-11//
	int wage;
	printf("這個月工讀生工作時數(h): ");
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
	printf("工讀生這個月薪水是%.2f元\n", salary);
	return 0;
}

//這個月工讀生工作時數(h) : 100
//工讀生這個月薪水是9187.50元