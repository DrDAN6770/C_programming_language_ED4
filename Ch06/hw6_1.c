#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;

	printf("請輸入字元或數字:");
	scanf("%c",&ch);
	printf("此字元是 %c, ASCII is %d\n", ch,ch);

	if(57>=(int)ch &&  48 <=(int)ch)
	{
		printf("%c, 此字元是數字\n",ch);

	}
	if (90 >= (int)ch && (int)ch >= 65 || 122 >= (int)ch&& (int)ch >= 97)
	{
		printf("%c, 此字元是英文\n",ch);;
	}
	return 0;
}

//請輸入字元或數字:6
//此字元是 6, ASCII is 54
//6, 此字元是數字