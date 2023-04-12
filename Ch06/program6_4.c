#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//簡短版的if-else (C)
// 條件式 ? 運算式1 : 運算式2 >> true for 運算式1 false for 運算式2
// 變數名稱 = 條件判斷 ? 運算式1 : 運算式2 >> 運算結果設給某個變數存放，意思如下
/*

if(條件)
	n = 運1
else
	n = 運2
*/

int main(void)
{
	int n1, n2, larger;
	printf("輸入兩整數:");
	scanf("%d %d", &n1, &n2);

	//n1 > n2 ? (larger = n1) : (larger = n2);
	larger = n1 > n2 ? n1 : n2;
	printf("%d 比較大\n", larger);

	return 0;
}

//輸入兩整數:120 20
//120 比較大