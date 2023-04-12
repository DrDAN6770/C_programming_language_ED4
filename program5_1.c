#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 14;
	printf("age = %d\n", n);
	n = n + 1;
	printf("age + 1, age = %d\n\n", n);	//5-1


	// 一元運算子
	/*
	!a; >> a的NOT運算
	a is 0; !a is 1
	a isn't 0, !a is 0
	1:ture
	0:false
	! : 否定運算
	*/

	int a = 0, b = 6;
	printf("a=%d,!a=%d\n", a, !a);
	printf("b=%d,!b=%d\n", b, !b);


	return 0;
}
//age = 14
//age + 1, age = 15
//
//a = 0, !a = 1
//b = 6, !b = 0