#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 14;
	printf("age = %d\n", n);
	n = n + 1;
	printf("age + 1, age = %d\n\n", n);	//5-1


	// �@���B��l
	/*
	!a; >> a��NOT�B��
	a is 0; !a is 1
	a isn't 0, !a is 0
	1:ture
	0:false
	! : �_�w�B��
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