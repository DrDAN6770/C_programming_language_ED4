#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// 關係運算子 if
// == 等於
// != 不等於

int main(void)
{
	if (5 > 2)
		printf("5 > 2 成立\n");
		printf("%d\n\n",5>2);
	if (1)							// 1:true, if的判斷結果會成立，但只要是非0數值(int、float)都成立
		printf("此行一定成立\n");
	if (0.5)
		printf("0.5 這行也一定成立\n\n");
	if (3 == 8)\
		printf("3=8 成立\n");
		printf("%d\n", 3 == 8);


	return 0;
}

//5 > 2 成立
//1
//
//此行一定成立
//0.5 這行也一定成立
//
//0