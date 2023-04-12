/* 輸入字串 */
/* 字串由兩個以上的字元組成 */
/* 字元陣列 character array, 陣列是一種特殊的資料型態，可以儲存一系列相同資料型態的變數 */
/* str前面不需要加&，因為str是陣列名稱，在C中，陣列名稱及為陣列的位置 */

/*
char 字串變數[字串長度]
cahr str[10];
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	char name[10];					/* 宣告字元陣列 */

	printf("What's your name:");
	scanf_s("%s", name,10);				/* 輸入字串，由字元陣列name所接收 */
	printf("Hi, %s, How are you?\n", name);

	/*
	char name2[10];
	printf("what's your name2 :");
	gets(name2);					允許空白字元出現，scanf會跳過空白
	printf("Hi\n%s", name2);
	*/
	return 0;
}

//What's your name:Dan
//Hi, Dan, How are you ?