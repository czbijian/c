#include <stdio.h>
int main()
{
	int i=0;
	int j=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==3)
			{
				goto end;
			}
			printf("j=%d\t",j);
		}
		printf("\n");
	}
end:

	return 0;
}

