#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	//6-16
	double a, b, c, k;
	printf("輸入二元一次方程式的係數: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	k = b * b - a * c * 4;

	if (a != 0)
	{
		if (k > 0)
		{
			printf("根為%lf & %lf\n", (-b + sqrt(k)) / (2 * a), (-b - sqrt(k)) / (2 * a));
		}
		else if (k == 0)
		{
			printf("根為%lf\n", -b / (2 * a));
		}
		else
		printf("沒有實根\n");
	}
	else
		printf("根為%lf\n", -c / b);
	return 0;
}
