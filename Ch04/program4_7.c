/*
在DOS or Windows的環境下按enter
會被解釋成carriage return 還有 line feed這兩個動作，意思是歸位CR及換行LF
歸位(ASCII=13) >> 同列游標移動到最左邊
換行(ASCII=10) >> 游標移動到下一行
輸入完後按下enter後>scanf收到整數num後>執行歸位，將換行放到緩衝區>下一個輸入將緩衝區的換行讀入>印出換行

%c前面加空格，可以跳過不可列印字元
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	char ch;

	printf("請輸入一個整數:");
	scanf("%d", &num);
	printf("請輸入一個字元:");
	scanf(" %c", &ch);

	printf("num = %d , ASCII of ch = %d\n",num,ch);
	return 0;

}

//請輸入一個整數:5
//請輸入一個字元 : a
//num = 5, ASCII of ch = 97