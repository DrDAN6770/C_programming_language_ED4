#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// �L�a�j��
// ���ھ��]�O�γo��z���_���U�@�ӨϥΪ�
int main(void)
{

	int i = 1;
	char ch = 0;
	//while (i > 0)
		//printf("i = %d\n", i++);

	while (ch!= 17)
	{
		printf("�п�J�@�r��: ");
		//scanf(" %c", &ch);
		ch = getche();
		printf(",ASCII of ch =%d\n", ch);
	}
	printf("�w���FCtrl+q...\n");

	return 0;
}