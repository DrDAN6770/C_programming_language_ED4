#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1,num2;

		printf("輸入兩整數以計算乘積:\n");
		scanf("%d %d", &num1,&num2);
		printf("%d * %d = %d\n\n", num1,num2,num1*num2);		//4-10


	int id, y;
		printf("輸入學號:");
		scanf("%d",&id);

		printf("輸入年齡:");
		scanf("%d",&y);
		printf("學號 : %d 年齡 : %d\n\n",id,y);		//4-11

	char lastname[5],name[10];
		printf("輸入姓氏: ");
		scanf("%s", lastname);
		printf("輸入名字: ");
		scanf("%s", name);
		printf("姓名 : %s %s\n\n", name, lastname);		//4-12

	char str[10];
		printf("(a)以雙引號將字串包圍:");
		scanf("%s", str);
		printf("\"%s\"\n",str);							//4-13(a)

		printf("(b)以反鞋號將字串包圍，列印欄寬為20:");
		scanf("%s", str);
		printf("\\%20s\\\n", str);						//b

		printf("(c)以反鞋號將字串包圍，列印欄寬為20,靠左印出:");
		scanf("%s", str);
		printf("\\%-20s\\\n\n", str);						//c

	int n;
		printf("輸入十進位整數:");
		scanf("%d",&n);
		printf("%d的八進位數是 %o\n%d的十六進位是 %x\n\n",n,n,n,n);		//4-14

		printf("輸入十六進位整數:");
		scanf("%x", &n);
		printf("%x的八進位數是 %o\n%x的十進位是 %d\n\n", n, n, n, n);		//4-15
	return 0;
}

//輸入兩整數以計算乘積:
//5 6
//5 * 6 = 30
//
//輸入學號 : 12345
//輸入年齡 : 26
//學號 : 12345 年齡 : 26
//
//輸入姓氏 : LING
//輸入名字 : DAN
//姓名 : DAN LING
//
//(a)以雙引號將字串包圍:Hi
//"Hi"
//(b)以反鞋號將字串包圍，列印欄寬為20:Hi
//\                  Hi\
//(c)以反鞋號將字串包圍，列印欄寬為20, 靠左印出:Hi
//\Hi                  \
//
//輸入十進位整數:10
//10的八進位數是 12
//10的十六進位是 a
//
//輸入十六進位整數 : a
//a的八進位數是 12
//a的十進位是 10