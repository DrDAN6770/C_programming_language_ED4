#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//運算式簡寫
/*
a +=b : a=a+b
a -=b : a=a-b
a *=b : a=a*b
a /=b : a=a/b
a %=b : a=a%b
c/= d--  >>  先執行c=c/d,再執行d=d-1
*/

int main(void)
{
	int a = 3, b = 5;
	printf("Before : a = %d, b = %d\n", a, b);
	a += b;
	printf("After : a = %d, b = %d\n\n", a, b);

	int c = 16, d = 2;
	printf("Before : c = %d, d = %d\n", c, d);
	 c/= d*=a;
	printf("After : c = %d, d = %d\n", c, d);
	return 0;
}

//Before: a = 3, b = 5
//After : a = 8, b = 5
//
//Before : c = 16, d = 2
//After : c = 1, d = 16