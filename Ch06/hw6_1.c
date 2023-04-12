#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;

	printf("叫块じ┪计:");
	scanf("%c",&ch);
	printf("じ琌 %c, ASCII is %d\n", ch,ch);

	if(57>=(int)ch &&  48 <=(int)ch)
	{
		printf("%c, じ琌计\n",ch);

	}
	if (90 >= (int)ch && (int)ch >= 65 || 122 >= (int)ch&& (int)ch >= 97)
	{
		printf("%c, じ琌璣ゅ\n",ch);;
	}
	return 0;
}

//叫块じ┪计:6
//じ琌 6, ASCII is 54
//6, じ琌计