/*二维字符数组*/
/*字符串数组*/
#include <stdio.h>
int main()
{
	char str[5][20]={
	"您好",
	"哈哈哈",
	"好好学习",
	"天天向上",
	"哈哈"
	};
	int i=0;
	for(i=0;i<5;i++)
	{
		printf("%s\n",str[i]);
	}
	return 0;
}
