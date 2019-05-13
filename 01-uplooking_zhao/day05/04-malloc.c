/*堆区,动态存储区,自由存储区*/
/*实现数据结构*/
#include <stdio.h>
#include <stdlib.h>
int main()
{

/*	内存泄漏
 *	int *p1=NULL;
	int *p=malloc(sizeof(int));
	printf("p=%p\n",p);
	*p=100;
	printf("*p=%d\n",*p);
	free(p);
	p=NULL;
	p=malloc(sizeof(int));
	*p=200;
	printf("p=%p\n",p);
	free(p);
	p=NULL;*/


	/*迷途指针*/
	int *p2=malloc(sizeof(int));
	*p2=500;
	free(p2);
	//迷途指针也叫悬空指针、野指针，指的是不指向任何合法对象的指针。
	//对象被释放或收回，但是对该指针没有做任何修改，以至于改指针仍旧指向已经回收的内存地址
	//此情况下该指针便称为迷途指针。
	return 0;
}


