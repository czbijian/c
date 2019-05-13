/*函数指针*/
#include <stdio.h>
void fun1()
{
	printf("fun1函数\n");
}
void fun2()
{
	printf("fun2函数\n");
}
int fun3()
{

	printf("fun3函数\n");
	return 0;
}
int fun4(int x,int y)
{

	printf("fun4函数\n");
	return 0;

}
int fun5(double x,double y)
{

	printf("fun5函数\n");
	return 0;
}
int main()
{
//	fun1();
//	fun2();
	int x;
	void (*p1)();
	int (*p3)();
	int (*p4)(int,int);
	int (*p5)(double,double);
	p1=fun1;
	(*p1)();
	p1=fun2;
	(*p1)();
	p3=fun3;
	x=p3();
	p4=fun4;
	x=p4(1,1);
	p5=fun5;
	x=(*p5)(1.0,1.0);


//	printf("fun1地址=%p\n",fun1);
//	printf("fun2地址=%p\n",fun2);
	return 0;
}

