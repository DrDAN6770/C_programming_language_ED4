#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	///6-8//
	int a, b, c;
	printf("��J�T�������: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && b + c > a && a + c > b)
	{
		printf("%d,%d,%d ��c���T����,�B", a, b, c);

		if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
		{
			printf("�O�����T����\n");
		}
			else if (a * a + b * b > c * c && b * b + c * c > a * a && a * a + c * c > b * b)
			{
				printf("�O�U���T����\n");
			}
			else
				printf("�O�w���T����\n");
	}
	else
		printf("%d,%d,%d ����c���T����\n", a, b, c);
	return 0;
}