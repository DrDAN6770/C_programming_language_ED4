#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char grade;
	printf("Input grade:");
	scanf("%c", &grade);

	switch (grade)
	{
		case 'A':
		case 'a':
			printf("Excellent!!\n");
			break;
		case 'B':
		case 'b':
			printf("Good!!\n");
			break;
		case 'C':
		case 'c':
			printf("Be study hard!!\n");
			break;
		case 'D':
		case 'd':
			printf("Shame!!\n");
			break;
		default:
			printf("Failed!!\n");
	}
	return 0;
}

//Input grade : B
//Good!!