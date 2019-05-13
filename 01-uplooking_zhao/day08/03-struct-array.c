/*结构体数组*/
#include "a.h"
//typedef int INT;
int main()
{
	stu s[3]={{1,"aa",80},{2,"bb",70},{3,"cc",90}};
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("s[i].num=%d\n",s[i].num);
		printf("s[i].name=%s\n",s[i].name);
		printf("s[i].math=%d\n",s[i].math);
	}
	s[0].num=4;
	strcpy(s[0].name,"xx");
	s[0].math=100;
	return 0;
}

