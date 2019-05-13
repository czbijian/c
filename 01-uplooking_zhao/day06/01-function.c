/*函数*/
#include <stdio.h>
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
void A(int x,int y)
{
	x=1000;
	y=2000;
	printf("x=%d\n",x);
	printf("y=%d\n",y);
}
int main()//调用者
{
/*	int x;
	x=add(10,20);//被调用者
	printf("x=%d\n",x);*/
	int x=10;
	int y=20;
	A(x,y);
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	return 0;
}

