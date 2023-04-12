#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//邏輯運算子
/*
&& : and
|| : or
a>0 && b>0 : 兩者皆成立才true
a>0 || b>0 : 任一者成立就true
*/

int main(void)
{
	int score;
	printf("請輸入成績: ");
	scanf(" %d", &score);

	if (score < 0 || score>100)
		printf("Score is error\n");
	if (score < 60 && score>49)
		printf("Need retest:))\n");
	return 0;
}

//請輸入成績: 55
//Need retest : ))