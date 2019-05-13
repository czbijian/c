/*函数声明*/
/*函数定义*/
#include <stdio.h>
void A();
int main()
{
	A();
	return 0;
}
//void A();
//int add(int x,int y);
void A()
{
	printf("A函数");
}
int add(int x,int y)
{
	int z=x+y;
	return z;
}

