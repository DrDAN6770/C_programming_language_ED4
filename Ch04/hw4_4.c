#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	char ch;

	printf("�п�J�@�Ӿ��: ");
	scanf("%d",&num);
	rewind(stdin);

	printf("�п�J�@�Ӧr��: ");
	ch = getchar();
	printf("num=%d, ASCII of ch = %d\n\n",num,ch);	//4-19

	
	char ch1;
	printf("�п�J�@�Ӧr��: ");
	ch1 = getche();
	printf("\n��J���r���O");
	putchar(ch1);
	putchar('\n');
	putchar('\n');

	printf("�п�J�@�Ӧr��: ");
	ch1 = getch();
	printf("\n��J���r���O");
	putchar(ch1);
	putchar('\n\n');								//4-20

	return 0;
}

//�п�J�@�Ӿ��: 10
//�п�J�@�Ӧr�� : a
//num = 10, ASCII of ch = 97
//
//�п�J�@�Ӧr�� : b
//��J���r���Ob
//
//�п�J�@�Ӧr�� :
//��J���r���Oc