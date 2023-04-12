#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	///6-8//
	int a, b, c;
	printf("輸入三角形邊長: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && b + c > a && a + c > b)
	{
		printf("%d,%d,%d 能構成三角形,且", a, b, c);

		if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
		{
			printf("是直角三角形\n");
		}
			else if (a * a + b * b > c * c && b * b + c * c > a * a && a * a + c * c > b * b)
			{
				printf("是銳角三角形\n");
			}
			else
				printf("是鈍角三角形\n");
	}
	else
		printf("%d,%d,%d 不能構成三角形\n", a, b, c);
	return 0;
}