/*常量*/
#include <stdio.h>
int main()
{
	int a=10;
	a=20;
	const int b;//某些编译器会把全局变量初始为0。
	printf("b=%d\n",b);
	
	return 0;
}

