#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-13
	int month;
	printf("��J���: ");
	scanf("%d", &month);
	if (month > 0 && month <= 12)
	{
		if (month <= 2 || month == 12)
			printf("%d ��O�V��\n", month);
		else if (month >= 3 && month <= 5)
			printf("%d ��O�K��\n", month);
			else if (month >= 6 && month <= 8)
				printf("%d ��O�L��\n", month);
			else
				printf("%d ��O���\n", month);
	}
	else
		printf("error input month\n");
	return 0;
}

//��J���: 12
//12 ��O�V��