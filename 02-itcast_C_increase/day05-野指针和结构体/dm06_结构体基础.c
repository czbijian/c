#include "stdio.h"
#include "stdlib.h"
#include "string.h"


//1自己定义一个数据类型 数据类型的本质是固定大小内存块的别名
//2.c cpp 注意结构体类型定义变量的时候，c和c++编译器的处理行为不一样。
//3 结构体类型typedef
//4 结构变量内存四字节存放 
typedef  struct _Teacherbak
{
	char name[62];//64
	int age ; //4
	char c1; //4
	char c2;
}Teacherbak;

//结构体定义变量的方法3种
//结构体变量的初始化方法3种

struct Teacher
{
	char name[62];//64
	int age ; //4
}t2 = {"ddd", 55}, t3 = {"rrr", 66};

struct 
{
	char name[62];//64
	int age ; //4
}t4 = {"yyy", 5};

//struct  Teacher t1 = {"dddd", 40};

void main()
{

	//告诉编译器要分配内存
	//第一种方法
	struct  Teacher t1 = {"dddd", 40};
 	struct  Teacher *p = NULL;
	p = &t1;
	printf("sizeof(t1): %d\n", sizeof(t1));
	 
	 //结构体变量的赋值方法 操作结构体变量
	 // . -》
	 printf("%s\n", t1.name);//t2.操作符 是 干什么 有没有操作内存
	 						//是寻址操作 计算name 相对于t1大变量的偏移量 ===> 计算 cpu中进行
							//没有操作内存 
	 printf("%s\n", p->name);//->  是寻址操作 算name 相对于 t1大变量的  偏移量  计算 cup中进行。

	system("pause");
}
