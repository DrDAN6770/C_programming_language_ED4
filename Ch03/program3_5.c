#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num1 = 123.45F;	/* F �N���Ƭ��B�I�Ʊ`�ơA�S�[�|�Q��double*/
	float num2 = 4.56E-3F;

	float num3 = 123.456789012345F;
	double num4 = 123.456789012345;

	printf("num1 = %e\n", num1);	/* %e ���ƫ��A */
	printf("num2 = %f\n", num2);	/* %f �p�ƫ��A */


	printf("num3 = %16.12f\n", num3);	/* float ��ר�7~8�ӼƦr�A�W�L���������O���骺�ݭ� */
	printf("num4 = %16.12f\n", num4);	/* double 15~16�ӼƦr */

	/* %16.12f >> 16�Ӧr������e�A�p���I��12��� */


	printf("%d\n", sizeof num1);
	printf("%d\n", sizeof num2);
	printf("%d\n", sizeof num3);
	printf("%d\n", sizeof num4);

	/* sizeof �i�H�ݬY�`�ơB�ܼƦ��F�h�֭Ӧ줸�� */
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