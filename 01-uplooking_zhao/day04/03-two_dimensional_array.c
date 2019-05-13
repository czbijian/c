#include <stdio.h>
int main()
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
/*	printf("a=%p\n",a);
	printf("&a=%p\n",&a);
	printf("&a[0][0]=%p\n",&a[0][0]);
	printf("*a=%p\n",*a);
	printf("**a=%d\n",**a);
	printf("*(*a+1)=%d\n",*(*a+1));*/
	int i=0;
	int j=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("*(*(a+%d)+%d)=%d\n",i,j,*(*(a+i)+j));
		}
	
	}

	return 0;
}
