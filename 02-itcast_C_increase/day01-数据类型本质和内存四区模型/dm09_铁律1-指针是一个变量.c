#include "stdio.h"
#include "stdlib.h"


//char *p1 形参 形参也是被调用该函数的参数，只不过具有对外属性而已。
//
void getData01(char *p1)
{
	printf("getData01() begin\n");
	return ;
}

////char *p2 形参 是变量
void getData02(char **p2)
{
	printf("getData01() begin\n");
	return ;
}


////char *p3 形参 是变量
void getData03(char ***p3)
{
	printf("getData01() begin\n");
	return ;
}

////char *p7 形参 是变量
void getData07(char *******p7)
{
	printf("getData01() begin\n");
	return ;
}

/*
//对参数的指针类型应该怎么理解
//理解角度需要从两个角度出发
//站在c/c++编译器的角度 对形参，如果是指针类型，c编译器只会分配四个自己的内存。
//当我们使用内存的时候,我们才关心指针所指向的内存 是一维的还是二维的
////char *******p7 形参p7 是一个变量

//指针的数据类型到底是什么
指针的数据类型是指它所指向的内存空间的数据类型
指针的数据类型具有依附特性
结论：指针的步长，根据所指内存空间类型来定。


void senddata01(char    *p1); void senddata01(char*            p1);
void senddata02(char **    p1); void senddata02(char *     *p1);  void senddata02(char         **p1);
void senddata03(char ***p1);
void senddata04(char *p[]); void senddata04(char *     p[]);  void senddata04(char *p    []);
void senddata05(char (*p)[10]); void senddata05(char (*p)             [10]);
void senddata05(char *****p4);
*/

void main99()
{
	char *p1 = NULL;
	char **p2 = NULL;
	int  a = 10;
	
	int *p3 = NULL;
	int c = 0;

	a = 20; //直接通过变量修改a的值
	p3 = &a; //
	printf("0x%x\n", p3); 
	//*p放在=号的左边，去修改内存空间的值。
	*p3 = 30; //通过指针间接修改内存空间的值   
	c = *p3; //*p放在等号的右边从内存空间中拿值

	/*

	while(*p != '\0'')
	*p1++ = *p2++
	*/

	//*p 的意义：*就像一把钥匙 通过一个地址(&a),去修改a变量的标示的内存空间
	{
		int *p2 = 0x62fe98;
		*p2 = 100;
		*((int *)0x62fe98) =  200;
	}

	printf("*p2=%d\n", *p2);
	printf("p2:%d\n", sizeof(p2));
	system("pause");
}

void main16()
{
	char *p1 = NULL;
	char *p2 = NULL;


	char buf1[100] = {0};
	char buf2[100] = {0};
	strcpy(buf1, "abcdefg");

	p1 = buf1;
	p2 = buf2;

	while(*p1 != '\0')
	{
		*p2 = *p1;
		p2++; //p2 向后跳动1个字节
		p1++;
	}
	printf("buf2 = %s", buf2);

}

void main()
{
// 	{
// 		char *p = NULL;
// 		*p = 100;
// 		
// 	}

// 	{
// 		char *p = 0x77;
// 		*p = 100;
// 
// 	}

	{
		char *p = "abcdefg";
	//	p = 100;
		printf("%x \n", p);
		*p = 'z';//经常出现的错误 保证指针所指向的内存空间 可以被修改

	}

	system("pause");

}
