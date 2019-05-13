#include <stdio.h>
struct A
{
	short i;
	char x;
};
int main()
{
	int x;
	struct A a;
	int y;
	printf("&x=%p\n",&x);
	printf("&a=%p\n",&a);
	printf("&y=%p\n",&y);
	printf("sizeof(struct A)=%ld\n",sizeof(struct A));
	printf("sizeof(a)=%ld\n",sizeof(a));
	return 0;
}

