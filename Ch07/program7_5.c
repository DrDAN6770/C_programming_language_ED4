#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
//空迴圈
//裡面沒有內容，但一樣有消耗CPU
/*
for(初值;判斷條件;設定增減量)
{}
or
for(初值;判斷條件;設定增減量);
所以for迴圈後面加分號會形成空迴圈
用於需要觀看某個部分的執行結果，而故意將執行速度延遲

*/
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++);
		printf("i=%d\n", i);
	printf("final i= %d", i);
}

//i = 101
//final i = 101