/*二进制文件*/
#include <stdio.h>
int main()
{
	FILE *pf;
	int data[5]={123,456,789,987,765};
	if((pf=fopen("aaa.bin","wb"))==NULL)
	{
		printf("失败\n");
	}
	else
	{
		fwrite(data,sizeof(int),5,pf);

		fclose(pf);
	}

	return 0;
}

