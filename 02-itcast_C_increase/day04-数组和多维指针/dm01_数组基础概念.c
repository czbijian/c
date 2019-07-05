#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main11() 
{
	int i = 0;
	
	//a代表数组首元素的地址，不是整个数组的地址
	//&a表示整个数组的地址 &a a代表的数据类型不一样
	//&a 数组类型 int[10]
	//a 数组首元素的类型
	int a[10] = {1,2}; //其他初始化为0

	int b[] = {1,2};
	int c[200] = {0}; //编译期间搞定
	//对一维数组  C规定：
	//c是数组首元素的地址 c+1 步长 4个字节
	//&c 是整个数组的地址 //&c+1 步长 200*4 
	
	for (i=0; i<10; i++)
	{
		printf("%d ",a[i]);
	}
	
	memset(a,0, sizeof(a)); //手工的赋值
	system("pause");
	/**/

	return 0;	
}

//怎么样表达int a[10]这种数据类型那？int[] 
//类型本质：固定大小内存块的别名
//定义数组类型
void main12()
{

	typedef int (MyArrayType)[5]; //定义了一个数据类型  数组数据类型
	int i = 0;
	MyArrayType  myArray;  //int myArray[5];

	for (i=0; i<5; i++)
	{
		myArray[i] = i+1;
	}

	for (i=0; i<5; i++)
	{
		printf("%d ", myArray[i]);
	}

	printf("myArray代表数组首元素的地址 myArray:%d myArray+1:%d \n", myArray, myArray+1);
	printf("&myArray代表整个数组的地址 &myArray:%d &myArray+1:%d \n", &myArray, &myArray+1);

	printf("hello...\n");
	system("pause");
	return ;
}


//定义数组指针变量的方法1  
//用数组类型 * 
void main13()
{
	char *Myarray[] = {"1111", "33333", "aaaa"}; //指针 数组

	//数组指针  用一个指针 来指向一个数组

	typedef int (MyArrayType)[5]; //定义了一个数据类型  数组数据类型
	int i = 0;
	MyArrayType  myArray;  //int myArray[5]; //用类型定义变量 

	MyArrayType *pArray; //定义一个指针变量 这个指针变量 指向一个数组

	{
		int  a;
		int *p = NULL;
		p = &a;

	}
	{
		int myArray2[5]; //相当于一级指针

		pArray = &myArray2; //相当于2级指针
		for (i=0; i<5; i++)
		{
			(*pArray)[i] = i+1;
		}
	
		for (i=0; i<5; i++)
		{
			printf("%d ", (*pArray)[i]);
		}
	}
	printf("hello...\n");
	system("pause");
	return ;

}

//定义数组指针变量的第二种方法

void main14()
{

	//定义声明一个数组指针类型
	typedef int (*PArrayType)[5];
	PArrayType pArray;  //告诉编译器 给我分配一个指针变量

	int c[5];
	int i  = 0;
	pArray = &c;

	for (i=0; i<5; i++)
	{
		(*pArray)[i] = i + 1;
	}

	for (i=0; i<5; i++)
	{
		printf("%d ", (*pArray)[i]);
	}

	printf("hello...\n");
	system("pause");
	return ;
	
}

//定义数组指针变量的第三种方法
//前2种方法 通过类型定义变量 比较麻烦

void main()
{
	//int [][5]
	int (*pMyArray)[5]; //直接定义一个指向数组的 数组指针变量
	//定义c[5]的时候，编译器分配内存，为了能顺利的回收内存，为了有机会让编译器拿到原始内存首地址。
	//编译器就把c做成const量。
	int c[5];
	int i  = 0;
	pMyArray = &c;

	for (i=0; i<5; i++)
	{
		(*pMyArray)[i] = i + 1;
	}

	for (i=0; i<5; i++)
	{
		printf("%d ", (*pMyArray)[i]);
	}

	printf("hello...\n");
	system("pause");
	return ;

}

