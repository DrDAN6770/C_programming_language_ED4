#include <stdio.h>
#include <stdlib.h>

/* oveflow ���� */
/* 
��p�ƾ������e��̤j�ȡA�|�۰��k�s(�̤p��)
short [-32768 ~ 32767]
�W�L���h�q�̤p�}�l���m
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