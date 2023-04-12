#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// 字元變數 = getche(); 讀取字元並顯示
// 字元變數 = getch(); 讀取字元不顯示
// 輸入者不需要按enter，e代表echo，是否回傳到螢幕

int main(void)
{
	char ch;
	printf("請輸入一個字元: ");
	ch = getche();
	printf("\n你輸入的字元是: %c\n",ch);

	printf("請輸入一個字元二: ");
	ch = getch();
	printf("\n你輸入的字元二是: %c\n", ch);

	return 0;
}

//請輸入一個字元: a
//你輸入的字元是 : a
//請輸入一個字元二 :
//你輸入的字元二是: b