/*插入排序*/
//a[0]是用来存放交换数据用的。
#include <stdio.h>
#define max 10
int main()
{
	printf("请输入10个数\n");
	int a[max+1];
	int i,j;
	for(i=1;i<=max;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=2;i<=max;++i)
	{
		if(a[i]<a[i-1])
		{
			a[0]=a[i];
			for(j=i-1;a[0]<a[j];--j)
			{
				a[j+1]=a[j];
			}
			a[j+1]=a[0];
		}
	}
	for(i=1;i<=max;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

