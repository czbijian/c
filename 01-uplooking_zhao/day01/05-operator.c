/*运算符*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a=5;
	int b=8;
	int c=a%b;
	printf("c=%d\n",c);
	int i=0;
	int x;
	srand(time(NULL));
	for(i=0;i<5;i++)
	{
		x=rand();
		x=40+x%9;
		printf("x=%d\n",x);
	}
	return 0;
}
