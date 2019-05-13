/*结构指针和数组*/
#include "a.h"
int main()
{
	stu s[3]={1,"aa",100,2,"bb",20,3,"cc",90};
	stu *p;
	stu *p1;
	p1=malloc(sizeof(stu)*3);
	p=s;
	int i=0;
	for(i=0;i<3;i++)
	{
		(p1+i)->num=i+1;
	}
	for(i=0;i<3;i++)
	{
		printf("(p1+%d)->num=%d\n",i,(p1+i)->num);
//		printf("(p+%d)->name=%s\n",i,(p+i)->name);
//		printf("(p+%d)->math=%d\n",i,(p+i)->math);
	
	}
	return 0;
}

