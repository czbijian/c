#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int myfree(char **p2)
{
	if (*p2 != NULL)
	{
		free(*p2);
		*p2 = NULL;
	}
}

void main()
{
	//����ָ�������ʱ��null
	char *p = NULL;
	p = (char *)malloc(100);

// 	
// 	if (p != NULL)
// 	{
// 		free(p);
// 		p = NULL;
// 	}

	myfree(&p);
	//ҵ���ϵ����

	//�˴�ʡ��5000��

	//�˴�ʡ��5000��//�˴�ʡ��5000��//�˴�ʡ��5000��


	//�˴�ʡ��5000��



	if (p != NULL)
	{
		free(p);
		p = NULL;
	}



	system("pause");
}
