#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-10//
	float x, y;
	printf("輸入x,y座標: ");
	scanf("%f %f", &x, &y);
	
	if (x == 0 || y == 0)
	{
		if (x == 0 && y == 0)
			printf("(%.1f,%.1f)在原點\n", x, y);
		else if(y==0)
			printf("(%.1f,%.1f)在x軸\n", x, y);
		else
			printf("(%.1f,%.1f)在y軸\n", x, y);
	}
	else if (x > 0)
	{
		if(y>0)
			printf("(%.1f,%.1f)在第一象限\n", x, y);
		else
			printf("(%.1f,%.1f)在第四象限\n", x, y);
	}
	else
	{
		if (y > 0)
			printf("(%.1f,%.1f)在第二象限\n", x, y);
		else
			printf("(%.1f,%.1f)在第三象限\n", x, y);
	}
	return 0;
}