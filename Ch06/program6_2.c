#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// else if
// else			>> ��̪�if�t��,�p�G�S{}����
// �Y�Ƥ��v�T����y�{�A���˦n�Y�P�i�H���T�z��

int main(void)
{
	int s;
		printf("�п�J���Z: ");
		scanf("%d",&s);

		if (s >= 80)
			printf("%d is grade A, ", s);
		else if (s >= 70)
			printf("%d is grade B, ", s);
		else if (s >= 60)
			printf("%d is grade C, ", s);
		else
			printf("%d, Failed, ", s);
				if (s < 60)
					{
						if (s >= 50)
							printf("�h�ѥ[�ɦ�\n");
						else
							printf("�h����\n");
					}
					else
						printf("Pass!\n");
	return 0 ;
}