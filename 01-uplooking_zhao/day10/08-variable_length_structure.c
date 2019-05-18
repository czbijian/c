/*可变长结构体*/
#include <stdio.h>
#include <stdlib.h>
struct A
{
	int x;
	double y;
	int z[0];
};
int main()
{
	printf("sizeof(struct A)=%ld\n",sizeof(struct A));
	struct A *p=malloc(sizeof(struct A)+sizeof(int)*10);
	p->x=100;
	p->y=123.45;
	int i=0;
	for(i=0;i<10;i++)
	{
		p->z[i]=i;
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",p->z[i]);
	}
	free(p);
	return 0;
}

