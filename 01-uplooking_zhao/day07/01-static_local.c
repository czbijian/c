/*static内部变量*/
#include <stdio.h>
int x=0;
void A()
{
	static int x=0;
	printf("A   &x=%p\n",&x);
/*	int y=0;
	x=x+1;
	y=y+1;
	printf("A x=%d\n",x);
	printf("A y=%d\n",y);*/

}
void B()
{
	static int x=0;
	printf("B   &x=%p\n",&x);
/*	int y=0;
	x=x+1;
	y=y+1;
	printf("B x=%d\n",x);
	printf("B y=%d\n",y);*/
}
int main()
{
	printf("全局&x=%p\n",&x);
	A();
	B();
	return 0;
}

