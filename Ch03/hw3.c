#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch = 7;

	printf("%c\n", ch);	/* hw3-2 */
	

	/* hw3-15 */
	float num1 = 30000.1F , num2 = 0.0004F;
	printf("%f\n",num1 + num2);
	printf("%f\n", (double)num1 + (double) num2);
	printf("%f %f\n", (double)num1,(double)num2);

	//30000.099609
	//30000.100009
	//30000.099609 0.000400



	double n1 = 30000.1, n2 = 0.0004;
	printf("%.4f\n", n1 + n2);
	printf("%f %f\n", n1 , n2);

	//30000.1004
	//30000.100000 0.000400

	/* hw3-18 */
	float n3 = 123.3987654321f, n4 = 3.8e5f, n5 = 123.3987654321F ;
	double n5_2 = 123.3987654321;
	int nn3 = (int)n3 , nn4 =  (int)n4;

	printf("%d , %d\n", nn3,nn4);
	printf("%.10f\n%.10f\n%f\n%.10f\n", n3, n5 ,n4, n5_2);

	//123, 380000
	//123.3987655640
	//123.3987655640
	//380000.000000
	//123.3987654321

	/* hw3-19 */
	int n6 = 5, n7 = 8;
	printf("%d\n", n6 / n7);
	printf("%f\n", (float)n6/n7);

	//0
	//0.625000

	return 0;
}
