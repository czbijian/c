/*嵌套结构*/
#include <stdio.h>
struct student
{
	int stu_num;
	char stu_name[12];
	int math;
};
struct teacher
{
	int tc_num;
	char tc_name[12];
};
struct cls
{
	int class_num;
	char class_name[12];
	struct teacher tec;
	struct student stu[3];
};
struct cls100
{
	int class_num;
	char class_name[12];
	struct student1
	{
		int stu_num;
		char stu_name;
		int math;
	}stu1[30];
};
int main()
{
	struct student stu8={100,"zz",100};
	struct student stu9=stu8;
	struct cls cls1={1,"one",101,"aa",1,"bb",90,2,"cc",80,3,"dd",60};
	printf("cls1.class_num=%d\n",cls1.class_num);
	printf("cls1.class_name=%s\n",cls1.class_name);
	printf("cls1.tec.tc_num=%d\n",cls1.tec.tc_num);
	printf("cls1.tec.tc_name=%s\n",cls1.tec.tc_name);
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("cls1.stu[%d].stu_num=%d\n",i,cls1.stu[i].stu_num);
		printf("cls1.stu[%d].stu_name=%s\n",i,cls1.stu[i].stu_name);
		printf("cls1.stu[%d].math=%d\n",i,cls1.stu[i].math);
	}
		printf("stu9.stu_num=%d\n",stu9.stu_num);
		printf("stu9.stu_name=%s\n",stu9.stu_name);
		printf("stu9.math=%d\n",stu9.math);
	return 0;
}

