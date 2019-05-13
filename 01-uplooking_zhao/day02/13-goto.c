/*goto*/
#include <stdio.h>
int main()
{
	int i=1;
	int sum=0;
A:
	sum=sum+i;
	i++;
	if(i<=10)
		goto A;
	printf("sum=%d\n",sum);
	return 0;
}

