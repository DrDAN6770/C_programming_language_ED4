/*
%c = 字元
&s = 字串
%f = 浮點數
%o = 八進位
%x = 16進位
%lf = double
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*輸入函數*/
	int num;
	printf("請輸入一個整數:");
	scanf_s("%d",&num);			/* & 位置運算子，把資料存到變數所在的位址中 */
	printf("num=%d\n", num);	/* a = 123, a : 變數、123 : 變數值、&a : 變數a的位址  */

	int a, b;
	printf("2 intger:");
	scanf_s("%d %d", &a, &b);
	printf(" %d + %d = %d\n", a, b, a + b);


	printf("2 intger with \",\" :");
	scanf_s("%d,%d", &a, &b); /*逗號，就得用逗號才能分開輸入*/
	printf(" %d + %d = %d\n", a, b, a + b);
	return 0;
}

//請輸入一個整數:5
//num = 5
//2 intger : 10 20
//10 + 20 = 30
//2 intger with "," : 4, 3
//4 + 3 = 7