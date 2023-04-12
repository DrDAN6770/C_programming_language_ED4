#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// if
// else if
int main(void)

{
	int num;
	printf("輸入整數: ");
	scanf("%d",&num);

	if (num > 0)
		printf("%d大於0\n", num);
	else
		if (num == 0)
			printf("%d等於0\n", num);
		else
			printf("%d小於0\n",num);

	printf("結束囉\n\n");

	

	printf("輸入整數: ");
	scanf("%d", &num);
	
	if (num % 2 == 0)
		printf("%d能被2整除,所以%d是偶數\n\n", num, num);
	else
		printf("%d不能被2整除，所以%d是奇數\n\n",num,num);

	printf("輸入整數: ");
	scanf("%d", &num);

	if (num%2!=0)
		printf("%d不能被2整除,所以%d是奇數\n", num, num);
	else
		printf("%d能被2整除，所以%d是偶數\n", num, num);


	return 0;
}

//輸入整數: 10
//10大於0
//結束囉
//
//輸入整數 : 10
//10能被2整除, 所以10是偶數
//
//輸入整數 : 9
//9不能被2整除, 所以9是奇數
