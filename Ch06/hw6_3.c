#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//6-5//
	int weight;
	printf("輸入體重: ");
	scanf("%d",&weight);

	(weight > 90) ? printf("過重\n") : printf("沒過重\n");

	//6-6//
	int hight;
	printf("輸入身高體重: ");
	scanf("%d %d",&hight ,&weight);
	(weight > 90 && hight < 180) ? printf("過重\n") : printf("沒過重\n");

	//6-7//
	int a, b, c;
	printf("輸入三角形邊長: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && b + c > a && a + c > b)
		printf("%d,%d,%d 能構成三角形\n", a,b,c);
	else
		printf("%d,%d,%d 不能構成三角形\n", a, b, c);
	return 0;
}

//輸入體重: 65
//沒過重
//輸入身高體重 : 170 65
//沒過重
//輸入三角形邊長 : 3 5 4
//3, 5, 4 能構成三角形