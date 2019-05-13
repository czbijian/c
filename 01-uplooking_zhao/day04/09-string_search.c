/*字符串搜索*/
#include <stdio.h>
int main()
{
	int i=0,j=0,find_len=0,count=0;
	char a[30]={'\0'};
	char b[30]={'\0'};
	printf("大串\n");
	scanf("%s",a);
	printf("小串\n");
	scanf("%s",b);
	while(b[find_len]!='\0')
	{
		find_len++;
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b[0])
		{
			for(j=0;j<find_len;j++)
			{	
				if(a[i+j]==b[j])
				{
					continue;
				}
				else
				{
					break;
				}
			}
			if(j==find_len)
			{
				printf("串找到位置为%d\n",i);
				count++;
			}
		}
	}
	printf("共有%d个串与小串相同\n",count);
	return 0;
}

