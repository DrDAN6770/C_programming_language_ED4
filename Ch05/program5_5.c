#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//�޿�B��l
/*
&& : and
|| : or
a>0 && b>0 : ��̬Ҧ��ߤ~true
a>0 || b>0 : ���@�̦��ߴNtrue
*/

int main(void)
{
	int score;
	printf("�п�J���Z: ");
	scanf(" %d", &score);

	if (score < 0 || score>100)
		printf("Score is error\n");
	if (score < 60 && score>49)
		printf("Need retest:))\n");
	return 0;
}

//�п�J���Z: 55
//Need retest : ))