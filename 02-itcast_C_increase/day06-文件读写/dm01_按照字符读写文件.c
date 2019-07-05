#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main01_fputc()
{
	int		i = 0;
	FILE *fp = NULL;
	//char *filename = "c:\\1.txt";
	//linux和win下通用   统一用45度
	char *filename2 = "c:/2.txt";  
	char a[27]= "abcdefghijklmn";
	fp = fopen(filename2, "r+");
	if (fp == NULL)
	{
		printf("func fopen() err:%d \n");
		return;
	}
	printf("打开成功\n");

	for (i=0; i<strlen(a); i++)
	{
		fputc(a[i], fp);
	}

	fclose(fp);


	return ;
}

void main02_fgetc()
{
	int		i = 0;
	FILE *fp = NULL;
	//char *filename = "c:\\1.txt";
	char *filename2 = "c:/2.txt";  // 统一的用45度 
	char a[27]= "abcdefghijklmn";
	fp = fopen(filename2, "r+"); //读和写方式
	if (fp == NULL)
	{
		printf("func fopen() err:%d \n");
		return;
	}
	printf("打开成功\n");

	while (!feof(fp))
	{
		char tempc = fgetc(fp);
		printf("%c", tempc);
		
	}

	if (fp != NULL)
	{
		fclose(fp);
	}

	return ;
}


void main()
{
	//main01_fputc();
	main02_fgetc();
	printf("hello...\n");
	system("pause");
	return ;

}