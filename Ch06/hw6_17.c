#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-26
	int season;
	RE:
	printf("��J�Ʀr1~4: ");
	scanf("%d", &season);
	//rewind(stdin);
	switch (season)
	{
	case 1:
		printf("�K��\n");
		break;
	case 2:
		printf("�L��\n");
		break;
	case 3:
		printf("���\n");
		break;
	case 4:
		printf("�V��\n");
		break;
	default:
		printf("��J���~�A�Э��s��J\n");
		rewind(stdin);
		goto RE;
	}
	return 0;
}

//��J�Ʀr1~4: 1
//�K��