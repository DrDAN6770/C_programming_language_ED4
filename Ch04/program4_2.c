/*
%c = �r��
&s = �r��
%f = �B�I��
%o = �K�i��
%x = 16�i��
%lf = double
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*��J���*/
	int num;
	printf("�п�J�@�Ӿ��:");
	scanf_s("%d",&num);			/* & ��m�B��l�A���Ʀs���ܼƩҦb����}�� */
	printf("num=%d\n", num);	/* a = 123, a : �ܼơB123 : �ܼƭȡB&a : �ܼ�a����}  */

	int a, b;
	printf("2 intger:");
	scanf_s("%d %d", &a, &b);
	printf(" %d + %d = %d\n", a, b, a + b);


	printf("2 intger with \",\" :");
	scanf_s("%d,%d", &a, &b); /*�r���A�N�o�γr���~����}��J*/
	printf(" %d + %d = %d\n", a, b, a + b);
	return 0;
}

//�п�J�@�Ӿ��:5
//num = 5
//2 intger : 10 20
//10 + 20 = 30
//2 intger with "," : 4, 3
//4 + 3 = 7