#include "stdio.h"
#include "stdlib.h"

//ջ����
//ջ���������ģ�
//ջ������������ڴ�ռ�buf��ŷ�����������ͬ�ĸ���
//�����������ģ�
typedef int u32;
typedef char u8;

//��ʾ��stack�������� �����£� 
int main11()
{
	float *p1 = NULL;
	int *p2 = NULL;
	int a = 0;
	int b= 0;
	char buf[16];
	//p1�ĵ�ַ����p2�� a�ĵ�ַ����b������ջ���������������µġ� 
	printf("&p1:%x, &p2:%x, &a:%x, &b:%x \n", &p1, &p2, &a, &b);
	//buf��ŷ��������ϵġ���̬���ӵ�ʱ��buf��������ڴ�ռ�ı�� ���Ѿ����������� 
	printf("&buf[0]:%x, &buf[1]:%x", &buf[0], &buf[1]);

	getchar();
}

//��������� ע��Ұָ��
//��ϸ�۲�malloc�ڴ��ַ��С
//��ʾheap��������  �����ϣ� 
int main()
{
	char *p1 = NULL;
	char *p2= NULL;
	p1 = (char *)malloc(16);
	p2 = (char *)malloc(16);

	//p1��ָ��Ķ�����ַС��p2��ָ��Ķ�����ַ�����Զ��������������ġ� 
	printf("\n p1:%x, p2:%x", p1, p2);
	//p1�ĵ�ַ����p2������ջ�������������ġ� 
	printf("\n &p1:%x, &p2:%x", &p1, &p2);

	//ͨ���ڴ��ַ��Ӹ�ֵ
	*((char *)0x7f6b60) = 'a';
	*((char *)0x7f6b61) = 'b';

	//ͨ���ڴ��ַ����޸��ڴ�ռ��ֵ
	//ͨ�������������ڴ�ռ�
	//ͨ���ڴ��ַ��ӷ����ڴ�ռ� �����C���Ե�����ԣ�Ҳ��c���Եľ���
	printf("\np2[0]:%c", p2[0]);
	printf("\np2[1]:%c", p2[1]);

	if (p1 != NULL) 
	{
		free(p1);
	}
	if (p2 != NULL)
	{
		free(p2);
	}
	getchar();
	return 0;
}
