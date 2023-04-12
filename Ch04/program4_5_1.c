#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char name[10];					/* 宣告字元陣列 */

	printf("What's your name:");
	scanf("%s", name);				/* 輸入字串，由字元陣列name所接收 */
	printf("Hi, %s, How are you?\n", name);
	return 0;
}

//What's your name:DAN
//Hi, DAN, How are you ?