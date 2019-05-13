#include <stdio.h>
int y;
void A()
{
	int x=0;
	x=x+1;
	printf("x=%d\n",x);

	printf("A中&x=%p\n",&x);
}

void B()
{
//	int m;
//	int x;
	int y;
	printf("B中&y=%p\n",&y);
//	printf("B中&x=%p\n",&x);
//	y=y+1;
//	printf("x=%d\n",y);
}
void C()
{
//	int b;
//	int c;
//	int x;
	printf("C中&y=%p\n",&y);
//	printf("C中&x=%p\n",&x);
//	y=y+1;
//	printf("x=%d\n",y);
}
int main()
{
	printf("y=%d\n",y);

	B();
	C();
	

	return 0;
}

