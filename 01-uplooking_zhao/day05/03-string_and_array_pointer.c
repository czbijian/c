/*指针数组与字符串*/
#include <stdio.h>
int main()
{
	char name[4][10]={"abcdefghj","qw","yz","mnl"};
	char *namep[4]={"abcdefghj","qw","yz","mnl"};
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("name[%d]=%s\n",i,name[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("namep[%d]=%s\n",i,namep[i]);
	}
	return 0;
}

