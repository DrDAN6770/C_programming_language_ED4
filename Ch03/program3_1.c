#include <stdio.h>
#include <stdlib.h>

/*
long int == 4 bytes
short int == 2
int == 4 (32767~-32767)
chart == 1 (0~255,256個字元)\
float == 4
double == 8
*/

/*
無號整數
不會出現負數
儲存範圍從0開始
少原本的負數範圍
*/

int main(void)
{
	int num1 = 12400;
	double num2 = 5.234;
	long num3 = 124000L;	/* L 代表此數為長整數常數 */
	short num4 = 0;
	
	printf("%d is an integer\n", num1);		/* 4 bytes 的記憶體空間存儲此變數 */
	printf("%f is a double\n", num2);		/* 8 bytes 的記憶體空存此變數 */
	printf("%d is a long\n", num3);		/* 4 bytes 的記憶體空存此變數 */
	printf("%d is a short\n", num4);		/* 2 bytes 的記憶體空存此變數 */

	return 0;
}

/*
12400 is an integer
5.234000 is a double
124000 is a long
0 is a short
*/
