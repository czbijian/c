/*指针运算*/
#include <stdio.h>
int main()
{
	int a;
	double b;
	char c;
	int *p1=&a;
	double *p2=&b;
	char *p3=&c;
	printf("&a=%p\n",&a);
	printf("p1=%p\n",p1);
	printf("(p1+1)=%p\n",(p1+1));
	printf("(p1+2)=%p\n",(p1+2));
	printf("*(p1+1)=%d\n",*(p1+1));
	printf("*(p1+2)=%d\n",*(p1+2));
	printf("&c=%p\n",&c);
	printf("p3=%p\n",p3);
//	printf("(++p3)=%p\n",(++p3));
//	printf("(++p3)=%p\n",(++p3));
	printf("(p3+1)=%p\n",(p3+1));
	printf("(p3+2)=%p\n",(p3+2));

	return 0;
}
