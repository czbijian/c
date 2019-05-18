#include<stdio.h>
int main()
{
	void *p=main;
	printf("%p\n",p);
	printf("%ld\n",sizeof(main));
	printf("%ld\n",sizeof(p));

	return 0;
}

