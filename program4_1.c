#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int num = 25;
	printf("\"%d%%的學生來自小康家庭\"\n", num);

	int num1 = 32, num2 = 1024, i = 1234;
	float num3 = 12.3478f;

	printf("num1 = %6d 公里\n\n", num1);	/* %6d 佔6格 向右對齊 */
	printf("num2 = %-6d 公里\n\n", num2);	/* %-6d 佔6格 向左對齊 */
	printf("num3= %6.2f 公里\n\n", num3);	/* %6.2f 六個字元寬度，顯示2位 */
	printf("i=%+08d%\n\n", i);
	/*空白 = 留一個空白(+) or 顯示負號(-)
	0 =空白處填0
	+ = 顯示正負號*/


	printf("42的八進位是%o\n", 42);
	printf("42的十六進位是%x\n", 42);
	/* 16 : 0123456789abcdef */
	return 0;
}

//"25%的學生來自小康家庭"
//num1 = 32 公里
//
//num2 = 1024   公里
//
//num3 = 12.35 公里
//
//i = +0001234
//
//42的八進位是52
//42的十六進位是2a