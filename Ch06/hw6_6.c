#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-10//
	float x, y;
	printf("��Jx,y�y��: ");
	scanf("%f %f", &x, &y);
	
	if (x == 0 || y == 0)
	{
		if (x == 0 && y == 0)
			printf("(%.1f,%.1f)�b���I\n", x, y);
		else if(y==0)
			printf("(%.1f,%.1f)�bx�b\n", x, y);
		else
			printf("(%.1f,%.1f)�by�b\n", x, y);
	}
	else if (x > 0)
	{
		if(y>0)
			printf("(%.1f,%.1f)�b�Ĥ@�H��\n", x, y);
		else
			printf("(%.1f,%.1f)�b�ĥ|�H��\n", x, y);
	}
	else
	{
		if (y > 0)
			printf("(%.1f,%.1f)�b�ĤG�H��\n", x, y);
		else
			printf("(%.1f,%.1f)�b�ĤT�H��\n", x, y);
	}
	return 0;
}