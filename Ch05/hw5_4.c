#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//a
	char a = 'A';
	short b = 12;
	float c = 12.4f;
	int d = 15;
	double e = 13.62;

	printf("a+(b+c)+(d*e) = %f\n", a + (b + c) + (d * e));
	
	//b
	printf("a+(b*c)+d-e = %f\n", a + (b * c) + d - e);

	//c
	printf("(b+c)+a*(d*e)= %f\n", (b + c) + a * (d * e));
	return 0;
}

//a + (b + c) + (d * e) = 293.700002
//a + (b * c) + d - e = 215.179988
//(b + c) + a * (d * e) = 13303.900000