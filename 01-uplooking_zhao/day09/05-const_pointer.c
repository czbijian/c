/*指针常量*/
#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	int * const p=&a;
	a=100;
	*p=200;
	

	return 0;
}

