#include "stdio.h"
#include "stdlib.h"
#include "string.h"


//�����ṹ�����֮���copy��Ϊ
struct AdvAdvTeacher
{
	char name[64];//64
	char *a_name; //4 //�ṹ��������һ��ָ��
	int age ; //4
};

struct AdvAdvTeacher*  creatTArray(int count)
{
	int i = 0;int j = 0;
	struct  AdvAdvTeacher*p1 = (struct  AdvAdvTeacher *)malloc(count*sizeof(struct  AdvAdvTeacher ));
	if (p1 == NULL)
	{
		return NULL;
	}
	for (i=0; i<count; i++)
	{
		memset(&p1[i], 0, sizeof(struct  AdvAdvTeacher));
		p1[i].a_name = (char *)malloc(128*sizeof(char)) ;// char buf[128*4]
		memset(p1[i].a_name , 0, 128*sizeof(char));
		//p1[i].stuname = (char **)malloc(100);
	}
	return p1;
}
void freeTArray(struct AdvAdvTeacher* tArray, int num)
{
	int i = 0;

	if (tArray == NULL)
	{
		return ;
	}

	for (i=0; i<num; i++)
	{
		char *p = tArray[i].a_name; //Ϊʲô������Ҫ�ͷ�
		if (p != NULL)
		{
			free(p);
		}
	}

	if (tArray != NULL)
	{
		free(tArray);
		tArray = NULL; //�������tArray���β�
	}
}

//��copy ǳcopy
void  copyObj03(struct  AdvAdvTeacher *from, struct  AdvAdvTeacher *to)
{
	memcpy(to, from, sizeof(struct  AdvAdvTeacher));
	to->a_name = (char *)malloc(128);
	strcpy(to->a_name, from->a_name);
}

void main01()
{
	//struct AdvAdvTeacher t1;
	//struct AdvAdvTeacher t2;

	struct AdvAdvTeacher*  p1 =creatTArray(1);
	struct AdvAdvTeacher*  p2 =creatTArray(1);

	printf("\n������age: " );
	//scanf("%d", &(p1->age) ) ;
	p1->age = 11;

	printf("\n����������: " );
	//scanf("%s", p1->name);
	strcpy(p1->name, "11");

	printf("\n���������: " );
	//scanf("%s", p1->a_name);
	strcpy(p1->a_name ,"2");

	(*p2) = (*p1); 

	freeTArray(p1, 1);
	freeTArray(p2, 1);
	system("pause");
}

void main()
{
	struct AdvAdvTeacher t1;
	struct AdvAdvTeacher t2;
	t1.age = 11;
	t1.a_name = (char *)malloc(100);
	strcpy(t1.a_name, "t1111");

// 	{
// 		char *p = (char *)malloc(100);
// 		free(p);
// 		free(p);
// 	}

	//t2 = t1; //��������ֵ���� �������Ⱥ�=����
	copyObj03(&t1, &t2);
	if (t1.a_name != NULL)
		free(t1.a_name);

	if (t2.a_name != NULL)
		free(t2.a_name);
	system("pause");
}