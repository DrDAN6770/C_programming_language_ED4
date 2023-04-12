#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//switch
//case(選擇值):				選擇值只能式整數常數或字元
//break						執行到break就跳出switch
//忘記+break會執行到swich敘述的最後，影響結果

int main(void)
{
	int a, b;
	char oper;

	printf("請輸入運算式(ex.3+2): ");
	scanf("%d %c %d",&a,&oper,&b);

	switch (oper)
	{
		case '+':
			printf("%d+%d=%d\n", a, b, a + b);
			break;
		case '-':
			printf("%d-%d=%d\n", a, b, a - b);
			break;
		case '*':
			printf("%d*%d=%d\n", a, b, a * b);
			break;
		case '/':
			printf("%d/%d=%.3f\n", a, b,(float)a / b);
			break;
		default:
			printf("無法辨認的算式!!\n");
	}
	return 0;
}