#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char name[10];					/* �ŧi�r���}�C */

	printf("What's your name:");
	scanf("%s", name);				/* ��J�r��A�Ѧr���}�Cname�ұ��� */
	printf("Hi, %s, How are you?\n", name);
	return 0;
}

//What's your name:DAN
//Hi, DAN, How are you ?