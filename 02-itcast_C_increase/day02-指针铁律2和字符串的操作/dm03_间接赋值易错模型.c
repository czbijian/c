#include "stdio.h"
#include "string.h"
#include "stdlib.h"

//看见一级指针，要去分辨指针的输入输出特性
//指针的输入特性：在主调函数里面分配内存，在被调用函数里面使用
//指针的输出特性：在被调用函数里面分配内存，主要是把运算结果甩出来

int getLen3(int *p /*in out*/)
{
	//*(NULL) = 40;
	//*(0)  = 40;
	*p = 40; //间接赋值 如果p是a的地址，那么就间接的修改a的值 //*p形参，去间接的修改实参的值
}

void main()
{
	int	a = 10; //定义了一个变量（实参）//a看成0级指针

	int *     p = NULL; ////定义了一个变量（形参）//1级指针


	a = 20; //直接修改a的值
	printf("a:%d \n", a);
	//p = &a; //a的地址赋给p //把一个变量去地址传给另外一个变量 //实参取地址传给形参

	getLen3(p);

	getLen3(NULL);
	

	printf("a:%d \n", a);

	system("pause");
}