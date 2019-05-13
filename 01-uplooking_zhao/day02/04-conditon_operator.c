/*条件运算符*/
#include <stdio.h>
int main()
{
	int a=10;
	int b=20;
	int c;
	c=a>b?a:b;
	//条件表达式?语句1:语句2
	printf("%d\n",c);
	if(a>b)
	{
		c=a;
	}
	else
	{
		c=b;
	}
	return 0;
}

