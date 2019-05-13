#include <stdio.h>
int main()
{
	int a[10]={0};
	int b[5]={0};
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个学生成绩\n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>=90)
		{
			b[0]++;
		}
		else if(a[i]>=80)
		{
			b[1]++;
		}
		else if(a[i]>=70)
		{
			b[2]++;
		}
		else if(a[i]>=60)
		{
			b[3]++;
		}
		else
		{
			b[4]++;
		}

	}
	for(i=0;i<5;i++)
	{
		printf("b[%d]=%d\n",i,b[i]);
	}
}

