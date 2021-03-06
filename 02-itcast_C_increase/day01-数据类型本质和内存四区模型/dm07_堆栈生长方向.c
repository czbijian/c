#include "stdio.h"
#include "stdlib.h"

//栈属性
//栈向下生长的，
//栈的生长方向和内存空间buf存放方向是两个不同的概念
//堆向上生长的，
typedef int u32;
typedef char u8;

//演示：stack生长方向 （向下） 
int main11()
{
	float *p1 = NULL;
	int *p2 = NULL;
	int a = 0;
	int b= 0;
	char buf[16];
	//p1的地址大于p2， a的地址大于b，所以栈的生长方向是向下的。 
	printf("&p1:%x, &p2:%x, &a:%x, &b:%x \n", &p1, &p2, &a, &b);
	//buf存放方向是向上的。静态链接的时候，buf所代表的内存空间的标号 就已经定义下来了 
	printf("&buf[0]:%x, &buf[1]:%x", &buf[0], &buf[1]);

	getchar();
}

//软件开发中 注意野指针
//仔细观察malloc内存地址大小
//演示heap生长方向  （向上） 
int main()
{
	char *p1 = NULL;
	char *p2= NULL;
	p1 = (char *)malloc(16);
	p2 = (char *)malloc(16);

	//p1的指向的堆区地址小于p2所指向的堆区地址，所以堆区是向上生长的。 
	printf("\n p1:%x, p2:%x", p1, p2);
	//p1的地址大于p2，所以栈区是乡下生长的。 
	printf("\n &p1:%x, &p2:%x", &p1, &p2);

	//通过内存地址间接赋值
	*((char *)0x7f6b60) = 'a';
	*((char *)0x7f6b61) = 'b';

	//通过内存地址间接修改内存空间的值
	//通过变量名访问内存空间
	//通过内存地址间接访问内存空间 这就是C语言的灵活性，也是c语言的精华
	printf("\np2[0]:%c", p2[0]);
	printf("\np2[1]:%c", p2[1]);

	if (p1 != NULL) 
	{
		free(p1);
	}
	if (p2 != NULL)
	{
		free(p2);
	}
	getchar();
	return 0;
}
