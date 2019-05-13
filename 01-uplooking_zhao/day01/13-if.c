/*if 练习*/
#include <stdio.h>
int main()
{
	int t=0,total=0;
	printf("请输入停车时间，1小时不收费，超出1小时每小时收费50元\n");
	scanf("%d",&t);
	if(t>1)
	{
		total=(t-1)*50;
	}
	printf("收费金额%d\n",total);
	return 0;
}
