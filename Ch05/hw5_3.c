#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//5-11
	float C,F;
	printf("輸入攝氏溫度: ");
	scanf("%f",&C);
	F = (float)9/5 * C + 32;				// 9/5沒轉型態會產出1
	printf("攝氏溫度%f, 華氏溫度為%f\n\n",C,F);
	
	//5-12
	printf("輸入華氏溫度: ");
	scanf("%f", &F);
	C = (float)(F-32)*5/9;
	printf("華氏溫度%f, 攝氏溫度為%f\n\n", F, C);

	//5-13
	float a, b;
	printf("輸入英哩: ");
	scanf("%f", &a);
	b = a * 1.6;
	printf("%f 英哩 = %f 公里\n\n",a,b);

	//5-14
	printf("輸入公里 ");
	scanf("%f", &b);
	a = b / 1.6;
	printf("%f 公里 = %f 英哩\n\n", b, a);

	//5-15
	float x, h, AREA;
	printf("請輸入平行四邊形底與高:\n");
	scanf("%f %f", &x,&h);
	AREA= x * h;
	printf("平行四邊形面積 = %f \n\n",AREA);

	//5-16
	float r,V;
	printf("請輸入圓球半徑: ");
	scanf("%f", &r);
	V = (float)4/3*3.14*r*r*r;
	printf("圓球體積 = %f \n\n", V);

	return 0;
}

//輸入攝氏溫度: 100
//攝氏溫度100.000000, 華氏溫度為212.000000
//
//輸入華氏溫度 : 212
//華氏溫度212.000000, 攝氏溫度為100.000000
//
//輸入英哩 : 10
//10.000000 英哩 = 16.000000 公里
//
//輸入公里 16
//16.000000 公里 = 10.000000 英哩
//
//請輸入平行四邊形底與高 :
//4 5
//平行四邊形面積 = 20.000000
//
//請輸入圓球半徑 : 3
//圓球體積 = 113.040001