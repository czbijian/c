/*运算符优先级*/
#include <stdio.h>
int main()
{
	int a=0,b=1,c=2,d=3,e=4,f=5;
	int x;
	x=(a+b)-(c*(d/e))%f;
	printf("x=%d\n",x);
	return 0;
}
