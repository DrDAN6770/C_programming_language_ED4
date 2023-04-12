#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//5-1a
	int a = 8;
	printf("a=%d\n", ++a);
	printf("a=%d\n\n", a--);

	//5-1b
	a = 10;
	int b = 20;
	
	a%=5;
	b/=6;
	printf("a=%d, b=%d\n\n",a,b);

	//5-1c
	a = 20, b = 5;
	a%=b;
	b *= 3;
	printf("a=%d, b=%d\n\n",a,b);


	//5-5
	printf("6%%4=%d\n",6%4);
	printf("12%%6=%d\n", 12 % 6);
	printf("12%%12=%d\n", 12 % 12);
	printf("35%%50=%d\n", 35 % 50);
	printf("50%%35=%d\n", 50 % 35);

	return  0;
}

//a = 9
//a = 9
//
//a = 0, b = 3
//
//a = 0, b = 15
//
//6 % 4 = 2
//12 % 6 = 0
//12 % 12 = 0
//35 % 50 = 35
//50 % 35 = 15