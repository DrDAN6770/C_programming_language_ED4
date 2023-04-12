#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	printf("I love C laguage best.\n");			//4-1
	printf("\"I love C laguage best.\"\n");		//4-2
	printf("\"Hello, C\"\n\"Hello, World\"\n");	//4-3
	printf("\"100/4=25\"\n");					//4-4
	printf("\'30%% 的學生來自中部地區，42%% 的學生來自南部地區\'\n");		//4-5

	float num = 28.47f;
	printf("num=%07.2f\n", num);				//4-6

	float num2 = 12.34f;
	printf("num=%+08.2f\n", num2);				//4-7

	printf("There is an old saying, \"Love me, love my dog.\"\n");			//4-8
	return 0;
}

//I love C laguage best.
//"I love C laguage best."
//"Hello, C"
//"Hello, World"
//"100/4=25"
//'30% 的學生來自中部地區，42% 的學生來自南部地區'
//num = 0028.47
//num = +0012.34
//There is an old saying, "Love me, love my dog."