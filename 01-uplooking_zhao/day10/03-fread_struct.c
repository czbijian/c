/*读取二进制文件*/
#include <stdio.h>
typedef struct list
{
	char w_name[20];
	char w_tel[20];
	char w_addr[50];
}person;
int main()
{
	FILE *pf;
	person rec;
	int i=0;
	if((pf=fopen("bb.bin","rb"))==NULL)
	{
		printf("失败\n");
	}
	else
	{
		for(i=0;i<4;i++)
		{
			fread(&rec,sizeof(rec),1,pf);
			printf("%s\t",rec.w_name);
			printf("%s\t",rec.w_tel);
			printf("%s\n",rec.w_addr);
		}
		fclose(pf);
	}
	return 0;
}

