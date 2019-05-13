#include <stdio.h>
int main()
{
	int year=0;
	printf("请输入年份\n");
	scanf("%d",&year);
	if(year%4!=0)
	{
		printf("%d年不是闰年\n",year);
	}
	else if(year%100==0)
	{
		if(year%400==0)
		{
			printf("%d是闰年\n",year);
		}
		else
		{
		
			printf("%d不是闰年\n",year);
		}
	}
	else
	{
	
		printf("%d是闰年\n",year);
	}
	return 0;
}

