/*数组*/
#include <stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={0};
	a[0]=100;
	int i=0;
/*	for(i=0;i<5;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}*/
	printf("a=%p\n",a);
	printf("&a[0]=%p\n",&a[0]);
	printf("*a=%d\n",*a);
	for(i=0;i<5;i++)
	{
		printf("*(a+%d)=%d\n",i,*(a+i));
	
	}
	*(a+2)=200;
	for(i=0;i<5;i++)
	{
		printf("*(a+%d)=%d\n",i,*(a+i));
	}
	int *p;
	p=a;
	for(i=0;i<5;i++)
	{
		printf("*(p+%d)=%d\n",i,*(p+i));
	}
	p=b;

	for(i=0;i<5;i++)
	{
		printf("*(p+%d)=%d\n",i,*(p+i));
	}
	for(i=0;i<5;i++)
	{
		printf("p[%d]=%d\n",i,p[i]);
	}
	printf("sizeof(a)=%ld\n",sizeof(a));
	printf("sizeof(b)=%ld\n",sizeof(b));
	printf("sizeof(p)=%ld\n",sizeof(p));

	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}

