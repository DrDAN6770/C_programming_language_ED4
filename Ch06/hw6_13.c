#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-20
	int season;
	printf("輸入數字1~4: ");
	scanf("%d", &season);
	switch (season)
	{
	case 1:
		printf("春天\n");
		break;
	case 2:
		printf("夏天\n");
		break;
	case 3:
		printf("秋天\n");
		break;
	case 4:
		printf("冬天\n");
		break;
	default:
		printf("輸入錯誤\n");
	}
	//6-21
	char ch;
	rewind(stdin);
	printf("輸入小寫字元: ");
	scanf(" %c", &ch);
	switch (ch)
	{
	case 'a':
		printf("您輸入的是%c\n", ch);
		break;
	case 'b':
		printf("您輸入的是%c\n", ch);
		break;
	default:
		printf("輸入的不是a或b\n");
	}
	//6-22
	printf("輸入字元: ");
	scanf(" %c", &ch);
	switch (ch) 
	{
	case 'a':
	case 'A':
		printf("您輸入的是A\n");
		break;
	case 'b':
	case 'B':
		printf("您輸入的是B\n");
		break;
	default:
		printf("輸入的不是A或B\n");
	}
	return 0;
}

//輸入數字1~4: 3
//秋天
//輸入小寫字元 : a
//您輸入的是a
//輸入字元 : b
//您輸入的是B