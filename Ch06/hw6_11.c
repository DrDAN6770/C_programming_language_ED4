#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-15
	int a, b, c, d, e, f, g;
	int X, Y;
	printf("應付金額: ");
	scanf("%d", &X);
	printf("所付金額: ");
	scanf("%d", &Y);

	if (X <= Y)
	{
		printf("應找%d元\n\n", Y - X);
		a = (Y - X) / 1000;
		b = (Y - X - 1000*a) / 500;
		c = (Y - X - 1000*a - 500*b) / 100;
		d = (Y - X - 1000*a - 500*b - 100*c) / 50;
		e = (Y - X - 1000*a - 500*b - 100*c - 50*d) / 10;
		f = (Y - X - 1000 * a - 500 * b - 100 * c - 50 * d - 10*e)/5;
		g = (Y - X - 1000 * a - 500 * b - 100 * c - 50 * d - 10 * e - 5*f);
		printf("一共:\n有%d張1000元\n有%d張500元\n有%d張100元\n有%d個50元\n有%d個10元\n有%d個5元\n有%d個1元\n",a,b,c,d,e,f,g);
	}
	else
		printf("金額不足\n");
	return 0;
}