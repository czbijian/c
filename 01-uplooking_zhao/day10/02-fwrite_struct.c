/*二进制文件处理结构体*/
#include <stdio.h>
#include <string.h>
typedef struct list
{
	char w_name[20];
	char w_tel[20];
	char w_addr[50];

}person;
void add_data(char *name,char *tel,char *addr,FILE *pf)
{
	person ad;
	strcpy(ad.w_name,name);
	strcpy(ad.w_tel,tel);
	strcpy(ad.w_addr,addr);
	fwrite(&ad,sizeof(ad),1,pf);
}
int main()
{
	FILE *pf;
	if((pf=fopen("bb.bin","wr"))==NULL)
	{
		printf("失败\n");
	}
	else
	{
		add_data("张三","1234567","北京",pf);
		add_data("张四","1234567","南京",pf);
		add_data("张五","1234567","上海",pf);
		add_data("张六","1234567","北京",pf);
		fclose(pf);
	}
	return 0;
}

