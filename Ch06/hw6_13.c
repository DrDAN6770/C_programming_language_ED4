#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-20
	int season;
	printf("��J�Ʀr1~4: ");
	scanf("%d", &season);
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
		printf("��J���~\n");
	}
	//6-21
	char ch;
	rewind(stdin);
	printf("��J�p�g�r��: ");
	scanf(" %c", &ch);
	switch (ch)
	{
	case 'a':
		printf("�z��J���O%c\n", ch);
		break;
	case 'b':
		printf("�z��J���O%c\n", ch);
		break;
	default:
		printf("��J�����Oa��b\n");
	}
	//6-22
	printf("��J�r��: ");
	scanf(" %c", &ch);
	switch (ch) 
	{
	case 'a':
	case 'A':
		printf("�z��J���OA\n");
		break;
	case 'b':
	case 'B':
		printf("�z��J���OB\n");
		break;
	default:
		printf("��J�����OA��B\n");
	}
	return 0;
}

//��J�Ʀr1~4: 3
//���
//��J�p�g�r�� : a
//�z��J���Oa
//��J�r�� : b
//�z��J���OB