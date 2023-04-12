#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 7, b = 5, c = 12, d = 6, e = 4;
	printf("%d * %d %% %d * %d / %d = %d\n",a,b,c,d,e,a*b%c*d/e);
	return 0;

}

//7 * 5 % 12 * 6 / 4 = 16