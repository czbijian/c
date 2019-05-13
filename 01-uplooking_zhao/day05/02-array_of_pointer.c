/*指针数组*/
#include <stdio.h>
int main()
{
	int *p[3];
	char *pc[3];
	int a1[4]={1,2,3,4};
	int a2[3]={5,6,7};
	int a3[2]={8,9};
	p[0]=a1;
	p[1]=a2;
	p[2]=a3;
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("*(*(p+1)+%d)=%d\n",i,*(*(p+1)+i));
	}
	int b[3][4];
	return 0;
}

