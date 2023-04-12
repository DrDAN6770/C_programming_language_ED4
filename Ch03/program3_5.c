#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num1 = 123.45F;	/* F 计疊翴计盽计⊿穦砆讽double*/
	float num2 = 4.56E-3F;

	float num3 = 123.456789012345F;
	double num4 = 123.456789012345;

	printf("num1 = %e\n", num1);	/* %e 计篈 */
	printf("num2 = %f\n", num2);	/* %f 计篈 */


	printf("num3 = %16.12f\n", num3);	/* float 弘7~8计禬筁场だ癘拘砰摧 */
	printf("num4 = %16.12f\n", num4);	/* double 15~16计 */

	/* %16.12f >> 16じ逆糴计翴12计 */


	printf("%d\n", sizeof num1);
	printf("%d\n", sizeof num2);
	printf("%d\n", sizeof num3);
	printf("%d\n", sizeof num4);

	/* sizeof 琘盽计跑计ぶじ舱 */
	return 0;
}

//num1 = 1.234500e+02
//num2 = 0.004560
//num3 = 123.456787109375
//num4 = 123.456789012345
//4
//4
//4
//8