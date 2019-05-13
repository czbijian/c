/*按址传递*/
#include <stdio.h>
void swp(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	int a=10;
	int b=20;
	swp(&a,&b);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
}

