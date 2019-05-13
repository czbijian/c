/*continue*/
#include <stdio.h>
int main()
{
	int i=0;
	for(i=1;i<=10;i++)
	{
		if(i==5)
			continue;
		printf("i=%d\n",i);
	}
	return 0;
}

