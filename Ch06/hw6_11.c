#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-15
	int a, b, c, d, e, f, g;
	int X, Y;
	printf("���I���B: ");
	scanf("%d", &X);
	printf("�ҥI���B: ");
	scanf("%d", &Y);

	if (X <= Y)
	{
		printf("����%d��\n\n", Y - X);
		a = (Y - X) / 1000;
		b = (Y - X - 1000*a) / 500;
		c = (Y - X - 1000*a - 500*b) / 100;
		d = (Y - X - 1000*a - 500*b - 100*c) / 50;
		e = (Y - X - 1000*a - 500*b - 100*c - 50*d) / 10;
		f = (Y - X - 1000 * a - 500 * b - 100 * c - 50 * d - 10*e)/5;
		g = (Y - X - 1000 * a - 500 * b - 100 * c - 50 * d - 10 * e - 5*f);
		printf("�@�@:\n��%d�i1000��\n��%d�i500��\n��%d�i100��\n��%d��50��\n��%d��10��\n��%d��5��\n��%d��1��\n",a,b,c,d,e,f,g);
	}
	else
		printf("���B����\n");
	return 0;
}