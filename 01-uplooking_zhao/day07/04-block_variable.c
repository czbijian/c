/*块级变量*/
#include <stdio.h>
int main()
{
	int i=10;
	int j=100;
	{
		int j=0;
		printf("j=%d\n",j);
	}
	printf("i=%d\n",i);
	printf("j=%d\n",j);
	return 0;
}


