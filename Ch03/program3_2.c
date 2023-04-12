#include <stdio.h>
#include <stdlib.h>

/* oveflow 犯 */
/* 
讽璸计竟ず甧程穦笆耴箂(程)
short [-32768 ~ 32767]
禬筁玥眖程秨﹍竚
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