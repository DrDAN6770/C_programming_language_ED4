#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-23
	int day;
	printf("��J1~7���Ʀr: ");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("���ѭn�W�Z\n");
		break;
	case 6:
	case 7:
		printf("���ѥ�\n");
		break;
	default:
		printf("input error\n");

	}
	return 0;
}