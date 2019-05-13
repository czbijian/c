/*文件操作*/
#include <stdio.h>
int main()
{
	int i=0;
	char name[20];
	int id;
	int math;
	FILE *pf;
	if((pf=fopen("a.txt","w"))==NULL)
	{
		printf("文件打开失败\n");
	}
	else
	{
		for(i=0;i<3;i++)
		{
			printf("学号:");
			scanf("%d",&id);
			printf("姓名:");
			scanf("%s",name);
			printf("成绩:");
			scanf("%d",&math);
			fprintf(pf,"%d\t%s\t%d\n",id,name,math);
		}
		
		fclose(pf);
	}
	return 0;
}

