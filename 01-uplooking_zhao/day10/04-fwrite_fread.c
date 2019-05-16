/*二进制文件操作事例*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct l
{
	char w_name[20];
	char w_tel[20];
}list;
int size;
void write_file(list *p,FILE *pf)
{
	fwrite(p,sizeof(list),size,pf);
}
void read_file(list *p,FILE *pf)
{
	fread(p,sizeof(list),size,pf);

}
int main()
{
	printf("请输入数据量:\n");
	scanf("%d",&size);
	FILE *pf;
	FILE *pfr;
	int i=0;
	list *pl=malloc(sizeof(list)*size);
	for(i=0;i<size;i++)
	{
		printf("姓名:");
		scanf("%s",pl[i].w_name);
		printf("电话:");
		scanf("%s",pl[i].w_tel);
	}
	if((pf=fopen("list.bin","wb"))==NULL)
	{
		printf("失败\n");
		return 0;
	}
	write_file(pl,pf);	
	fclose(pf);
	free(pl);
	pl=NULL;
	printf("读数据操作\n");
	pl=malloc(sizeof(list)*size);

	if((pfr=fopen("list.bin","rb"))==NULL)
	{
		printf("失败\n");
		return 0;
	}
	read_file(pl,pfr);
	for(i=0;i<size;i++)
	{
		printf("姓名:");
		printf("%s\t",pl[i].w_name);
		printf("电话:");
		printf("%s\n",pl[i].w_tel);
	}
	fclose(pfr);
	free(pl);
	pl=NULL;
	return 0;
}

