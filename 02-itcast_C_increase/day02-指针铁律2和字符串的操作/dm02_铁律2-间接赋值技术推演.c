#include "stdio.h"
#include "string.h"
#include "stdlib.h"

//指针做函数参数
//函数调用过程中，
//用1级指针（通常是形参，）去修改0级指针（通常是实参）的值
//用2级指针（通常是形参，）去修改1级指针（通常是实参）的值
//用3级指针（通常是形参，）去修改2级指针（通常是实参）的值
//用8级指针（通常是形参，）去修改7级指针（通常是实参）的值
//用n级指针（通常是形参，）去修改n-1级指针（通常是实参）的值

//函数调用时，实参参传给形参，用实参取地址，传给形参，在被调用函数里面用*p，
//来改变实参，把运算结果传出来。
//指针作为函数参数的精髓。

//*p间接赋值是指针存在的最大意义（现实意义）

int getLen(int *p)
{
	*p = 40; //间接赋值 如果p是a的地址，那么就间接的修改a的值 //*p形参，去间接的修改实参的值
}

//向通过形参去直接修改实参，
int getLen2(int p)
{
	p = 50; //间接赋值 如果p是a的地址，那么就间接的修改a的值 //*p形参，去间接的修改实参的值
}

//间接赋值的应用场景有2个
//场景1：在函数指针  *p1++ = *p2++
//场景2：指针做函数参数，通过*p形参求间接的修改实参的值，这才是指针存在的最大意义、。
//这才是C语言特有的现象，才是指针的精华

//
void main22()
{
	int	a = 10;  //条件1  定义了两个变量(实参a 另外一个变量是形参p)
	int *p = NULL;

	a = 20; //直接修改a的值
	printf("a:%d \n", a);
	
	p = &a; //条件2 建立关联

	*p = 30; //间接赋值 如果p是a的地址，那么就间接的修改a的值

	printf("a:%d \n", a);

	//p = &a; //a的地址赋给p 把这句话，转成函数调用
	getLen(&a);//建立关联:址传递： 把实参取地址 传递给 形参，在被调用函数里里面，用*p去修改实参的值。
	printf("a:%d \n", a);
	
	getLen2(a);//建立关联:值传递： 把实参复制一份给 形参，在被调用函数里里面，形参值得改变不影响实参。
	printf("a:%d \n", a);

	system("pause");
}

void getMem(char **p2)
{
	*p2 = 400; //间接赋值  通过p2修改指向的一级指针的值 
}

void getMem2(char *p2)
{
	p2 = 800; //间接赋值  只是改变本身的指向，不会影响实参 
}

void main33()
{
	char *p1 = NULL;

	char **p2 = NULL;

	p1 = 0x11;
	p2 = 0x22;

	//直接修改p1的值

	p1 = 0x111;

	//间接修改p1的值
	p2 = &p1; 

	*p2 = 100; //间接赋值  p2是p1的地址

	printf("p1:%d \n", p1);

	{
		*p2 = 200; //间接赋值  p2是p1的地址
		printf("p1:%d \n", p1);
	}

	getMem(&p1);

	getMem2(p1);

	printf("p1:%d \n", p1);



	system("pause");
	return ;
}

int  getMem3(char **myp1, int *mylen1,  char **myp2, int *mylen2)
{
	int		ret = 0;
	char	*tmp1, *tmp2;

	tmp1 = (char *)malloc(100);
	strcpy(tmp1, "1132233");

	//间接赋值 
	*mylen1 = strlen(tmp1);  //1级指针
	*myp1 = tmp1; //2级指针的间接赋值

	tmp2 = (char *)malloc(200);
	strcpy(tmp2, "aaaaavbdddddddd");

	*mylen2 = strlen(tmp2);  //1级指针
	*myp2 = tmp2; //2级指针的间接赋值


	return ret;
}

int  main24()
{
	int		ret = 0;
	char	*p1 = NULL;
	int		len1 = 0;
	char	*p2 = NULL;
	int		len2 = 0; 

	ret = getMem3(&p1, &len1, &p2, &len2);
	if (ret != 0)
	{
		printf("func getMem3() err:%d \n", ret);
		return ret;
	}
	printf("p1:%s \n", p1);
	printf("p2:%s \n", p2);
	if (p1 != NULL)
	{
		free(p1);
		p1 = NULL;
	}
	if (p2 != NULL)
	{
		free(p2);
		p2 = NULL;
	}


	printf("p1:%d \n", p1);
	system("pause");
	return ret;
}


/* 间接赋值成立的三个条件
条件1：定义了一个变量（实参）定义了一个变量（形参）
条件2：建立关联，//实参取地址传给形参
条件3：//*p形参，去间接的修改实参的值
main --->func
*/

//间接赋值的应用场景
void main()
{
	//1 2 3 这3个条件 写在有一个函数
	//12 写在一块   3 单独写在另外一个函数里面  =====>函数调用
	//1         23写在一块 ===>抛砖 ====C++会有,到时候,你别不认识......
	char from[128];
	char to[128] = {0};
	char *p1 = from;
	char *p2 = to;

	strcpy(from, "1122233133332fafdsafas");

	while (*p1 != '\0')
	{
		*p2 = *p1;
		p2 ++;
		p1++;
	}

	printf("to:%s \n", to);
	
	system("pause");
	return ;

}

