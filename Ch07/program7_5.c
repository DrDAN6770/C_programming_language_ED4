#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
//�Űj��
//�̭��S�����e�A���@�˦�����CPU
/*
for(���;�P�_����;�]�w�W��q)
{}
or
for(���;�P�_����;�]�w�W��q);
�ҥHfor�j��᭱�[�����|�Φ��Űj��
�Ω�ݭn�[�ݬY�ӳ��������浲�G�A�ӬG�N�N����t�ש���

*/
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++);
		printf("i=%d\n", i);
	printf("final i= %d", i);
}

//i = 101
//final i = 101