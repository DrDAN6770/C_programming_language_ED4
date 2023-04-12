#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 5, j = 12;

	int x, y, z;
	x = 6, y = 7, z = 24;

	printf("%d + %d + %d \n", i, i, i + 1); /*hw2_1*/

	printf("You are my best friend.\n"); /*hw2_3*/

	printf("%d + %d = %d \n",i,j,i+j); /*hw2_5*/

	printf("%d + %d + %d = %d \n", x, y, z, x + y + z); /*hw2_6*/

	printf("*\n"); /*hw2_11*/
	printf("**\n");
	printf("***\n");
	printf("****\n");
	printf("*****\n");

	return 0;
}

/*
5 + 5 + 6
You are my best friend.
5 + 12 = 17
6 + 7 + 24 = 37
*
**
***
****
*****
*/