/*参数型函数指针*/
#include <stdio.h>
int add(int,int);
int sub(int,int);
int math(int,int,int (*fun)(int,int));
int main()
{
	int x;
	int y;
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	int z;
	z=math(x,y,add);
	printf("z=%d\n",z);
	z=math(x,y,sub);
	printf("z=%d\n",z);
	return 0;
}
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int math(int x,int y,int (*fun)(int,int))
{
	return (*fun)(x,y);
}


