#include <stdio.h>
#include <stdlib.h>

/* 資料型態轉換 */

int main(void)
{
	int n1, n2;
	float num1 = 3.002F, num2 = 3.988F;
	int n = 5;

	n1 = (int) num1;	/* float to int (只取整數) */
	n2 = (int) num2;

	printf("num1 = %f, num2 = %f\n", num1, num2);
	printf("n1 = %d, n2 = %d\n", n1, n2);

	printf("n/2 = %d\n", n/2);
	printf("n/2 = %f\n", (float)n / 2 );	/* int to float (讀得到小數點) */

	return 0;
}

//num1 = 3.002000, num2 = 3.988000
//n1 = 3, n2 = 3
//n / 2 = 2
//n / 2 = 2.500000