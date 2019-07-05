#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//两个结构体变量之间的copy行为
struct Teacher
{
	char name[62];//64
	int age ; //4
};


//两个结构体变量之间可以copy数据，这个是c编译器给我提供的行为，我们要顺从
void main11()
{
	//告诉编译器要分配内存
	//第一种方法
	struct  Teacher t1 = {"dddd", 40};
	struct  Teacher t2 = {"t2", 50};
	struct  Teacher *  p = NULL;
	t2 = t1; //这个是=号操作，不是初始化
	p = &t2;

	printf("sizeof(t1): %d\n", sizeof(t1));
	printf("%s\n", t2.name);
	printf("%s\n", p->name);

	//用memcpy函数完成两个结构体变量之间的copy
	memcpy(&t2, &t1, sizeof(struct  Teacher));

	printf("%s\n", t2.name);
	printf("%s\n", p->name);

	//我们自己手工的域赋值
	//copyObj01(t1, t2);

	system("pause");
}

void copyObj01(struct  Teacher from, struct  Teacher to)
{
	memcpy(&to, &from, sizeof(struct  Teacher));
}

void  copyObj02(struct  Teacher *from, struct  Teacher *to)
{
	memcpy(to, from, sizeof(struct  Teacher));
}

//两个结构体变量之间可以copy数据，这个是c编译器给我提供的行为，我们要顺从
void main22()
{
	//告诉编译器要分配内存
	//第一种方法
	struct  Teacher t1 = {"dddd", 40};
	struct  Teacher t2 = {"t2", 50};
	//int a ;
	//结构体类型是复杂类型，结构体指针出来，就是一级指针
	struct  Teacher *  p = NULL;
	p = &t1;

	//我们自己手工的域赋值
	copyObj01(t1, t2);
	printf("%s\n", t2.name);
	printf("%s\n", p->name);
	
	copyObj02(&t1, &t2);
	printf("%s\n", t2.name);
	printf("%s\n", p->name);
	
	system("pause");
}

struct  Teacher *  creatTArray(int count)
{
	int i = 0;
	struct  Teacher*p1 = (struct  Teacher *)malloc(count*sizeof(struct  Teacher ));
	if (p1 == NULL)
	{
		return NULL;
	}
	for (i=0; i<count; i++)
	{
		memset(&p1[i], 0, sizeof(struct  Teacher));
		memset(p1+i, 0, sizeof(struct  Teacher));
	}
	return p1;
}

void main()
{
	//告诉编译器要分配内存
	//第一种方法
	struct  Teacher tArray[10];
	struct  Teacher *  pa= NULL;
	tArray[0].age = 10;
	
	creatTArray(2);
	pa[0].age = 10;

	system("pause");
}
