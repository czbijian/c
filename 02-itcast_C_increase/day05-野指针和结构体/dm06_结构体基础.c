#include "stdio.h"
#include "stdlib.h"
#include "string.h"


//1�Լ�����һ���������� �������͵ı����ǹ̶���С�ڴ��ı���
//2.c cpp ע��ṹ�����Ͷ��������ʱ��c��c++�������Ĵ�����Ϊ��һ����
//3 �ṹ������typedef
//4 �ṹ�����ڴ����ֽڴ�� 
typedef  struct _Teacherbak
{
	char name[62];//64
	int age ; //4
	char c1; //4
	char c2;
}Teacherbak;

//�ṹ�嶨������ķ���3��
//�ṹ������ĳ�ʼ������3��

struct Teacher
{
	char name[62];//64
	int age ; //4
}t2 = {"ddd", 55}, t3 = {"rrr", 66};

struct 
{
	char name[62];//64
	int age ; //4
}t4 = {"yyy", 5};

//struct  Teacher t1 = {"dddd", 40};

void main()
{

	//���߱�����Ҫ�����ڴ�
	//��һ�ַ���
	struct  Teacher t1 = {"dddd", 40};
 	struct  Teacher *p = NULL;
	p = &t1;
	printf("sizeof(t1): %d\n", sizeof(t1));
	 
	 //�ṹ������ĸ�ֵ���� �����ṹ�����
	 // . -��
	 printf("%s\n", t1.name);//t2.������ �� ��ʲô ��û�в����ڴ�
	 						//��Ѱַ���� ����name �����t1�������ƫ���� ===> ���� cpu�н���
							//û�в����ڴ� 
	 printf("%s\n", p->name);//->  ��Ѱַ���� ��name ����� t1�������  ƫ����  ���� cup�н��С�

	system("pause");
}
