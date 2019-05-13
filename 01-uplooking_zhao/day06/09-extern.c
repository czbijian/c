#include <stdio.h>
int x=900;//定义外部变量
void A()
{
	x=100;
	printf("A中x=%d\n",x);
}

