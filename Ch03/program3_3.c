#include <stdio.h>
#include <stdlib.h>

/*
�r�����A��1�줸(byte)
1�줸�զ�8 bytes
1�줸�եi���2^8=256�Ӧr��

ASCII
�q���Ϊ����Xcode
�C�ӽX�Τ@�Ӧ줸���x�s
0~127�N��`�βŸ�
*/

int main(void)
{
	char ch = 'a'; /*�N�r���`�� 'a' ���r���ܼ�ch */
	char chn = 97;	/*�NASCII�X��97���r�����r���ܼ� chn */
	char CH = 90;

	printf("ch = %c\n", ch);
	printf("chn = %c\n", chn);
	printf("ASCII of ch = %d\n", ch);	/* ch���Q�r��� */
	printf("CH = %c\n", CH);

	return 0;
}

//ch = a
//chn = a
//ASCII of ch = 97
//CH = Z
