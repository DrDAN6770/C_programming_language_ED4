#include <stdio.h>
#include <stdlib.h>

/*
字元型態佔1位元(byte)
1位元組有8 bytes
1位元組可表示2^8=256個字元

ASCII
電腦用的內碼code
每個碼用一個位元組儲存
0~127代表常用符號
*/

int main(void)
{
	char ch = 'a'; /*將字元常數 'a' 給字元變數ch */
	char chn = 97;	/*將ASCII碼為97的字元給字元變數 chn */
	char CH = 90;

	printf("ch = %c\n", ch);
	printf("chn = %c\n", chn);
	printf("ASCII of ch = %d\n", ch);	/* ch的十字位值 */
	printf("CH = %c\n", CH);

	return 0;
}

//ch = a
//chn = a
//ASCII of ch = 97
//CH = Z
