/* ��J�r�� */
/* �r��Ѩ�ӥH�W���r���զ� */
/* �r���}�C character array, �}�C�O�@�دS����ƫ��A�A�i�H�x�s�@�t�C�ۦP��ƫ��A���ܼ� */
/* str�e�����ݭn�[&�A�]��str�O�}�C�W�١A�bC���A�}�C�W�٤ά��}�C����m */

/*
char �r���ܼ�[�r�����]
cahr str[10];
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	char name[10];					/* �ŧi�r���}�C */

	printf("What's your name:");
	scanf_s("%s", name,10);				/* ��J�r��A�Ѧr���}�Cname�ұ��� */
	printf("Hi, %s, How are you?\n", name);

	/*
	char name2[10];
	printf("what's your name2 :");
	gets(name2);					���\�ťզr���X�{�Ascanf�|���L�ť�
	printf("Hi\n%s", name2);
	*/
	return 0;
}

//What's your name:Dan
//Hi, Dan, How are you ?