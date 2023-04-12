#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//a++ 先執行a再+1後給a；傳回值a=a
//++a a先+1再給a;傳回值a=a+1

int main(void)
{
	int a = 3;
	printf("a=%d", a);
	printf(", a的傳回值是%d",a++);
	printf(", a=%d\n",a);

	int b = 3;
	
	printf("a=%d", b);
	printf(", a的傳回值是%d", ++b);
	printf(", a=%d\n", b);

	return 0;
}

//a=3, a的傳回值是3, a=4
//a=3, a的傳回值是4, a=4