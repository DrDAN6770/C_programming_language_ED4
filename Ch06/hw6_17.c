#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-26
	int season;
	RE:
	printf("輸入數字1~4: ");
	scanf("%d", &season);
	//rewind(stdin);
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
		printf("輸入錯誤，請重新輸入\n");
		rewind(stdin);
		goto RE;
	}
	return 0;
}

//輸入數字1~4: 1
//春天