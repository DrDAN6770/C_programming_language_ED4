#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//運算式型態轉換
//由大到小
//double>float>long>int>short>char

int main(void)

{
	char ch = 'a';
	short s = -2;
	int i = 3;
	float f = 5.3f;
	double d = 6.28;

	printf("a = %d\n", ch);
	printf("ch/s = %d\n",ch/s);

	printf("d/f = %f\n", d/f);

	printf("s+i = %d\n", s+i);

	printf("(ch/s)-(d/f)-(s+i)=%f\n", (ch / s) - (d / f) - (s + i));
	printf("size=%d\n",sizeof((ch / s) - (d / f) - (s + i)));
	return 0;
}

//a = 97
//ch / s = -48
//d / f = 1.184906
//s + i = 1
//(ch / s) - (d / f) - (s + i) = -50.184906
//size = 8