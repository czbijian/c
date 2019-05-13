/*动态分配一维数组*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int inum=0;
	int *p=NULL;
	int i=0;
	printf("请输入数组大小\n");
	scanf("%d",&inum);
	p=malloc(sizeof(int)*inum);
	for(i=0;i<inum;i++)
	{
		p[i]=i;
	}
	for(i=0;i<inum;i++)
	{
		printf("*(p+%d)=%d\n",i,*(p+i));
	}
	free(p);
	p=NULL;
	return 0;
}

