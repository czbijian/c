#include <stdio.h>
int main()
{
	int a=1;
	int b=1;
	printf("a++=%d\n",a++);
	printf("a=%d\n",a);
	
	printf("++b=%d\n",++b);
	printf("b=%d\n",b);
	a=9;
	b=2;
	int c;
	c=a/b;
	printf("c=%d\n",c);
	return 0;
}

