/*函数指针数组*/
#include <stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
//int (*p[])(int,int)={add,sub,mul};
int (*p[3])(int,int);
int a=0;
int main()
{
	
	p[0]=add;
	p[1]=sub;
	p[2]=mul;
	char c[]={'+','-','*'};
	int x,y,i;
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	for(i=0;i<3;i++)
	{
		printf("%d%c%d=%d\n",x,c[i],y,p[i](x,y));
	}

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
int mul(int x,int y)
{
	return x*y;
}

