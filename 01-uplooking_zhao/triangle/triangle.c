#include <stdio.h>
int main()
{
	int i=0;
	int j=0;
	int k=0;
	for(i=1;i<=9;i=i+2)
	{
		for(k=1;k<=(9-i)/2;k++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}

