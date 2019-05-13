#include <stdio.h>
static int x=0;
extern int y;
int main()
{
	register int z;
	printf("y=%d\n",y);
	y=500;
	x=800;
	A();
	printf("c.c文件中的x=%d\n",x);
	printf("c.c文件中的&x=%p\n",&x);

	return 0;
}

