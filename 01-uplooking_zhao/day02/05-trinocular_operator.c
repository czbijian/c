/*条件运算符*/
#include <stdio.h>
int main()
{
	int a=0;
	printf("输入一个数\n");
	scanf("%d",&a);
	(a%2==0)?printf("偶数\n"):printf("奇数\n");

	return 0;
}

