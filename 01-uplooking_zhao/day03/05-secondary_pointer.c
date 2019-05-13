/*多重指针*/
#include <stdio.h>
int main()
{
	int a=10;
	int b=30;
	int *p=&a;
	p=&a;
	int **pp=&p;
/*	printf("a=%d\n",a);
	printf("&a=%p\n",&a);
	printf("p=%p\n",p);
	printf("&p=%p\n",&p);
	printf("pp=%p\n",pp);
	printf("*p=%d\n",*p);
	printf("*pp=%p\n",*pp);
	printf("**pp=%d\n",**pp);*/
	**pp=200;
	printf("a=%d\n",a);
	*pp=&b;

	printf("a=%d\n",a);
	printf("&a=%p\n",&a);
	printf("b=%d\n",b);
	printf("&b=%p\n",&b);
	printf("p=%p\n",p);
	printf("&p=%p\n",&p);
	printf("pp=%p\n",pp);
	printf("*p=%d\n",*p);
	printf("*pp=%p\n",*pp);
	printf("**pp=%d\n",**pp);
	

	return 0;
}

