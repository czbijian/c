/*变量的作用域及生命周期*/
#include <stdio.h>
int b;//外部变量  全局变量
void A()
{
	b=0;
	int c;//内部变量   局部变量
	int a;//内部变量   局部变量
}
int main()
{
	A();
	b=100;
	int a=0;//内部变量

	return 0;
}

