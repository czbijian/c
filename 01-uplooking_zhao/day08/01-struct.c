/*结构体*/
#include "a.h"
//#include <stdio.h>
//#include <string.h>
//数据
//学号  int num
//姓名  char name[20];
//成绩  int math
struct student1
{
	int num;
	char name[12];
	int math;
}s1,s2;
struct student1 s3;
int main()
{
/*	struct teacher
	{
		int num;
		char name[12];
		int class;
	};*/
	struct student stu1;
	struct student stu2={2,"李四",90};
	struct student stu3={0,"",0};
	stu1.num=1;
	strcpy(stu1.name,"张三");
	stu1.math=100;
	stu3.num=3;
	printf("stu1.num=%d\n",stu1.num);
	printf("stu1.name=%s\n",stu1.name);
	printf("stu1.math=%d\n",stu1.math);
	printf("stu2.num=%d\n",stu2.num);
	printf("stu2.name=%s\n",stu2.name);
	printf("stu2.math=%d\n",stu2.math);
	printf("sizeof(struct student)=%ld\n",sizeof(struct student));
	printf("sizeof(stu1)=%ld\n",sizeof(stu1));

	return 0;
}

