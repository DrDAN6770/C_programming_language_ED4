#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//6-12//
	float s;
	printf("Student's score: ");
	scanf("%f",&s);
	if (s >= 0)
	{
		if (s >= 80 && s <= 100)
			printf("This student get %.1f, A !!\n", s);
		else if (s >= 60 && s < 80)
			printf("This student get %.1f, B !\n", s);
			else
				printf("This student get %.1f, C\n", s);
	}
	else
		printf("This student's score is error\n");
	return 0;
}