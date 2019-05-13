/*动态分配二维数组*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,n1,n2,sum;
	int *stu=NULL;

	printf("输入学生数\n");
	scanf("%d",&n1);
	stu=malloc(sizeof(int)*n1);
	int **p=(int**)malloc(sizeof(int*)*n1);
	for(i=0;i<n1;i++)
	{
		printf("输入第%d个学生几科成绩\n",i+1);
		printf("输入有几科成绩\n");
		scanf("%d",&stu[i]);
		p[i]=malloc(sizeof(int)*stu[i]);
		for(j=0;j<stu[i];j++)
		{
			printf("第%d科成绩:\n",j+1);
			scanf("%d",&p[i][j]);
		}

	}
	
	for(i=0;i<n1;i++)
	{
		printf("第%d个学生成绩:\n",i+1);
		for(j=0;j<stu[i];j++)
		{
			printf("第%d科成绩:%d\n",j+1,p[i][j]);
		}
	}
	for(i=0;i<n1;i++)
	{
		free(p[i]);
	}
	free(p);
	p=NULL;
	return 0;
}


