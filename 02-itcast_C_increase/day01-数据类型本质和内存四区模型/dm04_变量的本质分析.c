#define  _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main()
{
	int a ;
	int b; 
	char *    p ;
	//p = 0xaa11
	a = 10; //1 ֱ�Ӹ�ֵ  //cpu����ִ��

	printf("&a: %d\n", &a);

	//2��Ӹ�ֵ ==ֱ��ͨ���ڴ�
	 *((int*)6487620) = 200;

	 printf("a: %d\n", a);

	 {
		p = 6487620;  // ��Ӹ�ֵ ͨ��ָ��

		*p = 300;
	 }

	 //3 ���ڴ�ռ��ܲ�����ȡ ����.....  C++ ���� ��ש.....
	//1245024
	
	printf("hello...\n");
	system("pause");
	return ;
}
