#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//�����ṹ�����֮���copy��Ϊ
struct Teacher
{
	char name[62];//64
	int age ; //4
};


//�����ṹ�����֮�����copy���ݣ������c�����������ṩ����Ϊ������Ҫ˳��
void main11()
{
	//���߱�����Ҫ�����ڴ�
	//��һ�ַ���
	struct  Teacher t1 = {"dddd", 40};
	struct  Teacher t2 = {"t2", 50};
	struct  Teacher *  p = NULL;
	t2 = t1; //�����=�Ų��������ǳ�ʼ��
	p = &t2;

	printf("sizeof(t1): %d\n", sizeof(t1));
	printf("%s\n", t2.name);
	printf("%s\n", p->name);

	//��memcpy������������ṹ�����֮���copy
	memcpy(&t2, &t1, sizeof(struct  Teacher));

	printf("%s\n", t2.name);
	printf("%s\n", p->name);

	//�����Լ��ֹ�����ֵ
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

//�����ṹ�����֮�����copy���ݣ������c�����������ṩ����Ϊ������Ҫ˳��
void main22()
{
	//���߱�����Ҫ�����ڴ�
	//��һ�ַ���
	struct  Teacher t1 = {"dddd", 40};
	struct  Teacher t2 = {"t2", 50};
	//int a ;
	//�ṹ�������Ǹ������ͣ��ṹ��ָ�����������һ��ָ��
	struct  Teacher *  p = NULL;
	p = &t1;

	//�����Լ��ֹ�����ֵ
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
	//���߱�����Ҫ�����ڴ�
	//��һ�ַ���
	struct  Teacher tArray[10];
	struct  Teacher *  pa= NULL;
	tArray[0].age = 10;
	
	creatTArray(2);
	pa[0].age = 10;

	system("pause");
}
