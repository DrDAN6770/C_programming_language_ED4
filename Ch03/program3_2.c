#include <stdio.h>
#include <stdlib.h>

/* oveflow 溢位 */
/* 
當計數器的內容到最大值，會自動歸零(最小值)
short [-32768 ~ 32767]
超過的則從最小開始重置
*/


int main(void)
{
	short sum, s = 32767;

	sum = s + 1;
	printf("s + 1 = %d\n", sum);
	printf("s + 2 = %d\n", sum + 1 );

	return 0;
}

//s + 1 = -32768
//s + 2 = -32767