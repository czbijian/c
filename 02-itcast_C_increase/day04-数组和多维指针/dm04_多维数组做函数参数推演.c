#include "stdio.h"
#include "stdlib.h"
#include "string.h"
//spit(char a[][30])
//

//指针类型不一样。=====》内存模型不一样吧。。。。
//没有内存那来的指针啊。。。。
int	printfArr22(char **ArrayStr, int iNum)
{
	int i = 0;
	for (i=0; i<iNum; i++)
	{
		printf("%s \n", ArrayStr[i]);
	}
	return 0;
}

//int array[10]===>int *array===>
//	int	printfArr22(char array[10], int iNum);
//
int printf1Array(char buf[64]);
int printf1Array(char buf[]);
int printf1Array(char *buf);

//int printf2Array(char myArray[10][30])

int	printfArr23_1(char myArray[10][30], int iNum)
{
	int i = 0;
	for (i=0; i<iNum; i++)
	{
		printf("%s \n", myArray[i]);
	}
	return 0;
}

int printf2Array_2(char myArray[][30], int iNum)
{
	int i = 0;
	for (i=0; i<iNum; i++)
	{
		printf("%s \n", myArray[i]);
	}
	return 0;
}
int printf2Array_3(char (*myArray)[30],int iNum)
{
	int i = 0;
	for (i=0; i<iNum; i++)
	{
		printf("%s \n", myArray[i]);
	}
	return 0;
}


//	int	printfArr22(char array[10], int iNum);
int	sortArr23(char myArray[10][30], int iNum)
{
	int i = 0, j = 0;
	char buf[30]; //buf数组名代表数组首元素的地址
	//排序
	for (i=0; i<4; i++)
	{
		for (j=i+1; j<4; j++)
		{
			if (strcmp(myArray[i], myArray[j]) > 0)
			{
				strcpy(buf, myArray[i]);
				strcpy(myArray[i],myArray[j]);
				strcpy(myArray[j], buf);
			}
		}
	}
}

void main()
{
	int i = 0;
	char myArray[10][30] =  {"ccccc", "aaaa", "bbbb","11111"}; //myArray数组名代表什么？抛砖

	//打印第二种内存模型
	for (i=0; i<4; i++)
	{
		printf("%s \n", myArray[i]);
	}

	printf("第二种内存模型，排序之前\n");

	printf2Array_2(myArray, 4);
	//printfArr23(myArray[10][30], 4);

	sortArr23(myArray, 4);	

	printf("第二种内存模型，排序之后\n");
	printf2Array_3(myArray, 4);
	system("pause");
}
