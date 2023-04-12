#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// else if
// else			>> 抓最近的if配對,如果沒{}的話
// 縮排不影響執行流程，但弄好縮牌可以正確理解

int main(void)
{
	int s;
		printf("請輸入成績: ");
		scanf("%d",&s);

		if (s >= 80)
			printf("%d is grade A, ", s);
		else if (s >= 70)
			printf("%d is grade B, ", s);
		else if (s >= 60)
			printf("%d is grade C, ", s);
		else
			printf("%d, Failed, ", s);
				if (s < 60)
					{
						if (s >= 50)
							printf("去參加補考\n");
						else
							printf("去重修\n");
					}
					else
						printf("Pass!\n");
	return 0 ;
}