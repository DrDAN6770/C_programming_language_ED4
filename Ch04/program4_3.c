/*

4779
4779/16 = 298...11 >> b
298/16 = 18...10 >> a
18/16 = 1..2 >> 2
1/16 = 0...1 >> 1
4779 = 12ab

12ab
1*16^3 + 2*16^2 + 10*16^1 + 11*16^0 = 1*4096+2*256+160+11 = 4779

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;

	printf(" �п�J16�i���� : ");
	scanf_s("%x",&n);
	printf("%x���Q�i�쬰%d\n",n,n);
	return 0;
}

//�п�J16�i����: 12ab
//12ab���Q�i�쬰4779