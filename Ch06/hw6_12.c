#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	//6-16
	double a, b, c, k;
	printf("��J�G���@����{�����Y��: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	k = b * b - a * c * 4;

	if (a != 0)
	{
		if (k > 0)
		{
			printf("�ڬ�%lf & %lf\n", (-b + sqrt(k)) / (2 * a), (-b - sqrt(k)) / (2 * a));
		}
		else if (k == 0)
		{
			printf("�ڬ�%lf\n", -b / (2 * a));
		}
		else
		printf("�S�����\n");
	}
	else
		printf("�ڬ�%lf\n", -c / b);
	return 0;
}
