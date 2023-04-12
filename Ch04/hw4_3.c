#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[10],str1[10],str2[10],str3[25];

	printf("Input a string: ");
	gets(str3);
	printf("The string is %s\n\n", str3);

	printf("Input a string 2: ");
	scanf("%s", str);
	scanf("%s", str1);
	scanf("%s", str2);
	printf("The string is %s %s %s\n\n",str,str1,str2);		//4-16

	char ch1, ch2;

	rewind(stdin);
	printf("input first char: ");
	scanf("%c",&ch1);

	rewind(stdin);
	printf("input second char: ");
	scanf("%c", &ch2);
	printf("ch1=%c, ch2=%c\n\n", ch1, ch2);

	char ch3, ch4;
	printf("input thrid char: ");
	scanf(" %c", &ch3);

	printf("input fourth char: ");
	scanf(" %c", &ch4);
	printf("ch3=%c, ch4=%c\n\n", ch3, ch4);			//4-17




	return 0;
}

//Input a string : hello
//The string is hello
//
//Input a string 2 : world
//hi
//yo
//The string is world hi yo
//
//input first char : D
//input second char : A
//ch1 = D, ch2 = A
//
//input thrid char : C
//input fourth char : B
//ch3 = C, ch4 = B