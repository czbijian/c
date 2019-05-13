/*常量指针*/
#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	const int *p;
	p=&a;
	p=&b;
	a=100;
	b=200;
	


	return 0;
}

