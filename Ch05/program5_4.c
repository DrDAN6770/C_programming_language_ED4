#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//a++ ������a�A+1�ᵹa�F�Ǧ^��a=a
//++a a��+1�A��a;�Ǧ^��a=a+1

int main(void)
{
	int a = 3;
	printf("a=%d", a);
	printf(", a���Ǧ^�ȬO%d",a++);
	printf(", a=%d\n",a);

	int b = 3;
	
	printf("a=%d", b);
	printf(", a���Ǧ^�ȬO%d", ++b);
	printf(", a=%d\n", b);

	return 0;
}

//a=3, a���Ǧ^�ȬO3, a=4
//a=3, a���Ǧ^�ȬO4, a=4