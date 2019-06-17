#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//字符串 
//1 C语言的字符串 以零结尾的字符串
//2 在C语言中没有字符串类型  通过字符数组(char buf[100]) 来模拟字符串 
//3 字符串的内存分配  堆上 栈上 全局区 (很重要)
//4 字符串和字符数组的区别 是不是 带有\0

//字符数组的初始化 
void main11()
{
	//初始化数组有两种方法
	//1 不指定长度
	char buf[] = {'a', 'b', 'c'}; //buf是个指针 是个常量指针 

	//2 指定长度
	char buf2[10] = {'a', 'b', 'c'};

	//3 字符串和字符数组的区别
	char buf3[] = {'a', 'b', 'c', '\0'}; //buf3是个指针 是个常量指针 3

	//print函数是c库函数，它就是按照C风格字符串进行输出数据

	//通过字符串常量初始化字符数组
	//通过这种方法它会自动给你\0
	char buf4[] = "abcdefg";
	printf("%s\n", buf4);
	
	//buf4中的字符串是存储在栈区的，可以改变每个字符的值。 
	buf4[0] = 'z';
	printf("%s\n", buf4);

	system("pause");
}

 
//字符数组 初始化
void main22()
{

	//1 指定长度  
	char buf2[100] = {'a', 'b', 'c', 'd'};  
	//1-1char buf3[2] = {'a', 'b', 'c', 'd'}; //如果初始化的个数大于内存的个数 编译错误
	//1-22//后面的buf2[4]-buf2[99] 0


	//2 不指定长度  C编译器会自动帮程序员 求元素的个数
	char buf1[] = {'a', 'b', 'c', 'd'};  //buf1是一个数组 不是一个以0结尾的字符串

	printf("buf2: %s \n", buf2);

	printf("buf2[88]:%d \n", buf2[88]);

	system("pause");

	return ;
}

//用字符串 来 初始化字符数组
//strlen() 是一个函数 求字符串的长度（不是求字符数组的长度），它的长度不包括\0
//sizeof() 是一个操作符，求数据类型（实体）的大小 
void main33()
{
	int size = 0;
	char buf3[] = "abcd"; // buf3 作为字符数组 应该是5个字节 //作为字符串 应该4个字节

	int len = strlen(buf3);
	printf("buf3字符的长度:%d \n", len); //4

	//buf3 作为数组 数组是一种数据类型 本质(固定小大内存块的别名)
	size = sizeof(buf3); //
	printf("buf3数组所占内存空间大小:%d \n", size); //5

	printf("hello....\n");

	{
		char buf4[128] = "abcd"; // buf
		printf("buf4[100]:%d \n", buf4[100]);
	}
	system("pause");
	return ;
}

//通过数组下标 和 指针
void main()
{
	int		i = 0;
	char	*p = NULL;
	char buf5[128] = "abcdefg"; // buf

	for (i=0; i<strlen(buf5); i++)
	{
		printf("%c ", buf5[i]); 
	}
	
	p = buf5; //buf 代表数组首元素的地址

	for (i=0; i<strlen(buf5); i++)
	{
		p = p +i;
		printf("%c ", *p ) ;
	}

	//buf
	for (i=0; i<strlen(buf5); i++)
	{
		printf("%c ", *(buf5+i) ) ;
	}

	//[] *的推导过程
	// buf5[i] ===> buf5[0+i]; ==> *(buf5+i);

	{
		//buf5 = buf5 + 1;
		//buf5 = 0x11;
	}
	printf("hello....\n");
	system("pause");
}

// []的本质 :和*p 是一样 ,只不过是符合程序员的阅读习惯
// buf5 是一个指针,  只读的常量  buf5是一个常量指针  析构内存的时候,保证buf所指向的内存空间安全释放
//为什么这么做?

//p普通指针和内存首地址区别



