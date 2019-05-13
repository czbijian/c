/*指针函数*/
#include <stdio.h>
char* A()
{
//	int x=1000;
//	int *p=&x;
	char *p="abcdefg";
	return p;
}
int* B(int a)
{

	return &a;
}
int* C(int *a)
{
	return a;
}
int main()
{
/*	char *p1;
	p1=A();
	printf("p1=%p\n",p1);
	printf("p1=%s\n",p1);
	char *p2="abcdefg";
	printf("p2=%p\n",p2);
	printf("p2=%s\n",p2);
	int x=10;
	int *p3;
	p3=B(x);*/

	int x=10;
	int *p3;
	p3=C(&x);
	return 0;
}

