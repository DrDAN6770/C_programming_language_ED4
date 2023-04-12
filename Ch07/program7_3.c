#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// 無窮迴圈
// 提款機也是用這原理不斷給下一個使用者
int main(void)
{

	int i = 1;
	char ch = 0;
	//while (i > 0)
		//printf("i = %d\n", i++);

	while (ch!= 17)
	{
		printf("請輸入一字元: ");
		//scanf(" %c", &ch);
		ch = getche();
		printf(",ASCII of ch =%d\n", ch);
	}
	printf("已按了Ctrl+q...\n");

	return 0;
}