/*读文件*/
#include <stdio.h>
int main()
{
	int i;
	int id;
	char name[20];
	int math;
	FILE *pf;
	if((pf=fopen("a.txt","r"))==NULL)
	{
		printf("文件打开失败\n");
	}
	else
	{
		for(i=0;i<3;i++)
		{
			fscanf(pf,"%d\t%s\t%d\n",&id,name,&math);	
			printf("学号:%d\n",id);
			printf("姓名:%s\n",name);
			printf("成绩:%d\n",math);
		}
	}
	return 0;
}

