#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1,num2;

		printf("��J���ƥH�p�⭼�n:\n");
		scanf("%d %d", &num1,&num2);
		printf("%d * %d = %d\n\n", num1,num2,num1*num2);		//4-10


	int id, y;
		printf("��J�Ǹ�:");
		scanf("%d",&id);

		printf("��J�~��:");
		scanf("%d",&y);
		printf("�Ǹ� : %d �~�� : %d\n\n",id,y);		//4-11

	char lastname[5],name[10];
		printf("��J�m��: ");
		scanf("%s", lastname);
		printf("��J�W�r: ");
		scanf("%s", name);
		printf("�m�W : %s %s\n\n", name, lastname);		//4-12

	char str[10];
		printf("(a)�H���޸��N�r��]��:");
		scanf("%s", str);
		printf("\"%s\"\n",str);							//4-13(a)

		printf("(b)�H�Ͼc���N�r��]��A�C�L��e��20:");
		scanf("%s", str);
		printf("\\%20s\\\n", str);						//b

		printf("(c)�H�Ͼc���N�r��]��A�C�L��e��20,�a���L�X:");
		scanf("%s", str);
		printf("\\%-20s\\\n\n", str);						//c

	int n;
		printf("��J�Q�i����:");
		scanf("%d",&n);
		printf("%d���K�i��ƬO %o\n%d���Q���i��O %x\n\n",n,n,n,n);		//4-14

		printf("��J�Q���i����:");
		scanf("%x", &n);
		printf("%x���K�i��ƬO %o\n%x���Q�i��O %d\n\n", n, n, n, n);		//4-15
	return 0;
}

//��J���ƥH�p�⭼�n:
//5 6
//5 * 6 = 30
//
//��J�Ǹ� : 12345
//��J�~�� : 26
//�Ǹ� : 12345 �~�� : 26
//
//��J�m�� : LING
//��J�W�r : DAN
//�m�W : DAN LING
//
//(a)�H���޸��N�r��]��:Hi
//"Hi"
//(b)�H�Ͼc���N�r��]��A�C�L��e��20:Hi
//\                  Hi\
//(c)�H�Ͼc���N�r��]��A�C�L��e��20, �a���L�X:Hi
//\Hi                  \
//
//��J�Q�i����:10
//10���K�i��ƬO 12
//10���Q���i��O a
//
//��J�Q���i���� : a
//a���K�i��ƬO 12
//a���Q�i��O 10