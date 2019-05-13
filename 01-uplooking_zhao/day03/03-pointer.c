/*指针基础*/
#include <stdio.h>
int main()
{
	unsigned int a=0x12345678;
/*  double b=123.456;
	int *p=NULL;
	int *p3=&a;
	double *p1=NULL;*/
	char *p2=NULL;
	int *p3=NULL;
//	p=&a;
//	p1=&b;
	p2=(char*)&a;
	p3=&a;
	printf("a=0x%x\n",a);
	printf("*p2=0x%x\n",*p2);
	printf("*p3=0x%x\n",*p3);

	
//	printf("sizeof(p)=%ld\n",sizeof(p));
//	printf("sizeof(p1)=%ld\n",sizeof(p1));
	printf("sizeof(p2)=%ld\n",sizeof(p2));
/*	printf("p=%p\n",p);
	printf("&a=%p\n",&a);
	printf("p3=%p\n",p3);
	printf("*p=%d\n",*p);
	*p=200;

	printf("a=%d\n",a);
	a=800;

	printf("*p=%d\n",*p);*/
	return 0;
}
