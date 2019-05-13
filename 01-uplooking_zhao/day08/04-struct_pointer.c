/*结构与指针*/
#include "a.h"
int main()
{
	stu *p;
	stu *p1;
	stu s={1,"aa",90};
	p=&s;
	p1=malloc(sizeof(stu));
	p1->num=2;
	strcpy(p1->name,"gg");
	p1->math=100;
	printf("p1->num=%d\n",p1->num);
	printf("p1->name=%s\n",p1->name);
	printf("p1->math=%d\n",p1->math);
/*	printf("(*p).num=%d\n",(*p).num);
	printf("(*p).name=%s\n",(*p).name);
	printf("(*p).math=%d\n",(*p).math);
	printf("p->num=%d\n",p->num);
	printf("p->name=%s\n",p->name);
	printf("p->math=%d\n",p->math);*/
	return 0;
}

