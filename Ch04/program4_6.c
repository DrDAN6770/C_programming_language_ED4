#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


/* scanf讀取方式 */
/*
會找第一個非空白字元
如果讀入的數值之後有其他字元，則會當作下一次要輸入所要讀取的資料(放在緩衝區,buffer)
緩衝區資料會先讀取，容易造成讀取資料錯誤

讀取緩衝區內殘留的資料
*/

/*
input = 空白*4 + 1250 + dollars
*/

int main(void)
{
	int num;
	char str[10];

	printf("請輸入一個整數:");
	scanf("%d", &num);
	printf("num=%d\n", num);

	printf("請輸入字串:");
	scanf("%s", str);
	printf("str = %s\n", str);

	return 0;
}

//請輸入一個整數:5
//num = 5
//請輸入字串 : abc
//str = abc