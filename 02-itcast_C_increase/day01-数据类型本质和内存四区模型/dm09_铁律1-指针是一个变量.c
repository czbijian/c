#include "stdio.h"
#include "stdlib.h"


//char *p1 �β� �β�Ҳ�Ǳ����øú����Ĳ�����ֻ�������ж������Զ��ѡ�
//
void getData01(char *p1)
{
	printf("getData01() begin\n");
	return ;
}

////char *p2 �β� �Ǳ���
void getData02(char **p2)
{
	printf("getData01() begin\n");
	return ;
}


////char *p3 �β� �Ǳ���
void getData03(char ***p3)
{
	printf("getData01() begin\n");
	return ;
}

////char *p7 �β� �Ǳ���
void getData07(char *******p7)
{
	printf("getData01() begin\n");
	return ;
}

/*
//�Բ�����ָ������Ӧ����ô���
//���Ƕ���Ҫ�������Ƕȳ���
//վ��c/c++�������ĽǶ� ���βΣ������ָ�����ͣ�c������ֻ������ĸ��Լ����ڴ档
//������ʹ���ڴ��ʱ��,���ǲŹ���ָ����ָ����ڴ� ��һά�Ļ��Ƕ�ά��
////char *******p7 �β�p7 ��һ������

//ָ����������͵�����ʲô
ָ�������������ָ����ָ����ڴ�ռ����������
ָ����������;�����������
���ۣ�ָ��Ĳ�����������ָ�ڴ�ռ�����������


void senddata01(char    *p1); void senddata01(char*            p1);
void senddata02(char **    p1); void senddata02(char *     *p1);  void senddata02(char         **p1);
void senddata03(char ***p1);
void senddata04(char *p[]); void senddata04(char *     p[]);  void senddata04(char *p    []);
void senddata05(char (*p)[10]); void senddata05(char (*p)             [10]);
void senddata05(char *****p4);
*/

void main99()
{
	char *p1 = NULL;
	char **p2 = NULL;
	int  a = 10;
	
	int *p3 = NULL;
	int c = 0;

	a = 20; //ֱ��ͨ�������޸�a��ֵ
	p3 = &a; //
	printf("0x%x\n", p3); 
	//*p����=�ŵ���ߣ�ȥ�޸��ڴ�ռ��ֵ��
	*p3 = 30; //ͨ��ָ�����޸��ڴ�ռ��ֵ   
	c = *p3; //*p���ڵȺŵ��ұߴ��ڴ�ռ�����ֵ

	/*

	while(*p != '\0'')
	*p1++ = *p2++
	*/

	//*p �����壺*����һ��Կ�� ͨ��һ����ַ(&a),ȥ�޸�a�����ı�ʾ���ڴ�ռ�
	{
		int *p2 = 0x62fe98;
		*p2 = 100;
		*((int *)0x62fe98) =  200;
	}

	printf("*p2=%d\n", *p2);
	printf("p2:%d\n", sizeof(p2));
	system("pause");
}

void main16()
{
	char *p1 = NULL;
	char *p2 = NULL;


	char buf1[100] = {0};
	char buf2[100] = {0};
	strcpy(buf1, "abcdefg");

	p1 = buf1;
	p2 = buf2;

	while(*p1 != '\0')
	{
		*p2 = *p1;
		p2++; //p2 �������1���ֽ�
		p1++;
	}
	printf("buf2 = %s", buf2);

}

void main()
{
// 	{
// 		char *p = NULL;
// 		*p = 100;
// 		
// 	}

// 	{
// 		char *p = 0x77;
// 		*p = 100;
// 
// 	}

	{
		char *p = "abcdefg";
	//	p = 100;
		printf("%x \n", p);
		*p = 'z';//�������ֵĴ��� ��ָ֤����ָ����ڴ�ռ� ���Ա��޸�

	}

	system("pause");

}
