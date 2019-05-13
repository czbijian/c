/*宏替换*/
#include <stdio.h>
#define A 100
#define B b
#define pi 3.14
#define max(A,B) ((A)>(B)?(A):(B))
int max1(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	return y;
}
double max2(double x,double y)
{
	if(x>y)
	{
		return x;
	}
	return y;
}
int main()
{
	int i=1;
	int m;
	m=max(++i,++i);
	printf("m=%d\n",m);
	i=1;
	m=max1(++i,++i);
	printf("m=%d\n",m);
#undef max
	
	m=max(++i,++i);
/*	int a=10;
	int b=20;
	int c=max(a,b);
	//c=10>20?10:20;
	double x=123.4;
	double y=123.5;
	double z=max(x,y);
	//z=123.4>123.5?123.4:123.5;
	printf("c=%d\n",c);
	printf("z=%lf\n",z);
	char *b="abcdefg";
	printf("A=%d\n",A);
	printf("B=%s\n",B);
	printf("pi=%f\n",pi);*/

	return 0;
}


