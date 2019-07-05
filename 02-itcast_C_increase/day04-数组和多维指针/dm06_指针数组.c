#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include <stdio.h>
#include <string.h>

//演示：指针数组的用法
//演示：找错误 注意return

//求关键字在表中的位置
//一个入口 多个出口
int searcheKeyTable(const char* table[], const int size, const char* key, int *pos)
{
	int rv = 0;
	int i = 0;
	int inum = 0;
	if (table==NULL || key==NULL || pos==NULL)
	{
		rv = -1;
		printf("func searcheKeyTable:%d", rv);
		return rv;
	}
	//间接的证明  数组做函数参数的退回 
	inum = (sizeof(table)/sizeof(*table));

	for(i=0; i<size; i++)
	{
		if( strcmp(key, table[i]) == 0 )
		{
			*pos = i;
			//break;
			return rv;	
		}
	}

	//没有找到返回-1
	if (i == size)
	{
		*pos = -1;
	}
	return rv;
}

#define DIM(a) (sizeof(a)/sizeof(*a))
//DIM(c_keyword)===>  (sizeof(c_keyword)/sizeof(*c_keyword))

int main66()
{
	int inum = 0;
	int pos = 0;
	int a[10];
	int i = 0;
	char*   c_keyword[] = {
		"while", 
		"case",
		"static",
		"do"
	};

	{
		int a[10];
		sizeof(a);
	}

	for(i=0; c_keyword[i]!=NULL; i++)
	{
		printf("%s\n", c_keyword[i]);
	}

	inum = (sizeof(c_keyword)/sizeof(*c_keyword));
	searcheKeyTable( c_keyword, DIM(c_keyword),"do", &pos);
	searcheKeyTable( c_keyword, inum,"do", &pos);
	printf("pos:%d\n", pos);
	//searcheKeyTable(NULL, DIM(c_keyword),"do", &pos);
	//printf("pos:%d\n", pos);
	searcheKeyTable( c_keyword, DIM(c_keyword), "static", &pos);
	printf("pos:%d\n", pos);

	getchar();
	return ;
}

//main函数是操作系统调用的函数
//在程序执行的时候可以向main函数传递参数

/*
argc 命令行参数
argv 命令行参数数组
env  函数变量数组

int main();
int main(int argc);
int main(int argc, char *argv[])
*/

int main661(int argc, char* argv[], char* env[])
{
	int i = 0;
	//main02_1();

	printf("******************* Begin argv *******************\n");
	for(i=0; i<argc; i++)
	{
		printf("%s\n", argv[i]);
	}

// 	for(i=0; argv[i]!=NULL; i++)
// 	{
// 		printf("%s\n", argv[i]);
// 	}
	printf("******************* End argv *******************\n");

	printf("\n");
	printf("\n");
	printf("\n");

	printf("******************* Begin env *******************\n");

	for(i=0; env[i]!=NULL; i++)
	{
		printf("%s\n", env[i]);
	}

	printf("******************* End env*******************\n");

	getchar();
}

void main()
{
	int inum = 0;
	int pos = 0;
	int a[10];
	int i = 0;
	//指针数组  自我结束能力
	//指针数组当函数参数的时候，指针数组会退化为指针 需要把数组的个数传给被调用函数。。。。。。
	char*   c_keyword[] = {
		"while", 
		"case",
		"static",
		"do",//常量字符串的首地址是不是一个32位的数
		'\0'//填写一个零是不是应该
	};  

	char*   c_keyword2[] = {
		"while", 
		"case",
		"static",
		"do",
		0
	}; 


	char*   c_keyword3[] = {
		"while", 
		"case",
		"static",
		"do",
		NULL
	}; 

	//[] * 区别是 【】只不过是编译器帮我们做了一个*p操作而已。
	for (i=0; c_keyword[i] != NULL; i++)
	{
		printf("%s\n", c_keyword[i]);
	}
	printf("\n....\n");
	for (i=0; c_keyword2[i] != NULL; i++)
	{
		printf("%s\n", c_keyword2[i]);
	}
	printf("\n....\n");
	for (i=0; c_keyword3[i] != NULL; i++)
	{
		printf("%s\n", c_keyword3[i]);
	}


	system("pause");
}



int main45()
{
	int inum = 0;
	int pos = 0;
	int a[10];
	int i = 0;
	//指针数组
	char*   c_keyword[] = {
		"while", 
		"case",
		"static",
		"do",
		'\0'
	};
	// NULL   0  '\0'


	for(i=0; c_keyword[i]!=NULL; i++)
	{
		printf("%s\n", c_keyword[i]);
	}
	system("pause");
}
