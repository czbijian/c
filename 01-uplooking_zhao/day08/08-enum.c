/*枚举*/
#include <stdio.h>
enum A
{
	x,
	y=5,
	z
};
int main()
{
	enum A a;
	a=x;
	printf("a=%d\n",a);
	a=y;
	printf("a=%d\n",a);
	a=z;
	printf("a=%d\n",a);
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);

	return 0;
}

