#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


// goto
// �i�H�L����a���{���H�N�ѬY�B����t�@�B
/*

���ҦW��:
	�ԭz;
	goto ���ҦW��;

*/

int main(void)
{
	int j = 0, SUM = 0;
start:
	j++;
	SUM += j;
	printf("%d", j);
	if (j < 10)
	{
		printf("+");
		goto start;
	}
		printf("=%d\n",SUM);


	int i = 0, sum = 0;
	for (i; i < 11;++i)
	{
		sum += i;
	}
	printf("sum(1~10)=%d\n",sum);
	return 0;
}

//1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
//sum(1~10) = 55