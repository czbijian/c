#include "stdio.h"
#include "stdlib.h"
#include "string.h"


struct AdvTeacher
{
	char name[64];//64
	char *a_name; //4
	int age ; //4
};

int printtArray(struct AdvTeacher *pArray, int num)
{
	int i = 0;
	for (i=0; i<num; i++)
	{
		printf("\n %d ", pArray[i].age);
		printf("%s ", pArray[i].name);
		printf("%s ", pArray[i].a_name);
	}
	return 0;
}

int sorttArray(struct AdvTeacher *pArray, int num )
{
	int i = 0, j = 0;
	struct AdvTeacher tmp;
	for (i=0; i<4; i++)
	{
		for (j=i+1; j<num; j++)
		{
			if (pArray[i].age < pArray[j].age)
			{
				tmp = pArray[i];
				pArray[i] = pArray[j];
				pArray[j] = tmp;
			}
		}
	}
	return 0;
}

struct AdvTeacher*  creatTArray(int count)
{
	int i = 0;
	struct  AdvTeacher*p1 = (struct  AdvTeacher *)malloc(count*sizeof(struct  AdvTeacher ));
	if (p1 == NULL)
	{
		return NULL;
	}
	for (i=0; i<count; i++)
	{
		memset(&p1[i], 0, sizeof(struct  AdvTeacher));
		memset(p1+i, 0, sizeof(struct  AdvTeacher));
		p1[i].a_name = (char *)malloc(128*sizeof(char)) ;// char buf[128*4]
		memset(p1[i].a_name , 0, 128*sizeof(char));
	}
	return p1;
}

void freeTArray(struct AdvTeacher* tArray, int num)
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

		//������ʱ�����˭�����������10Ԫ��ˮ��������
		if (tArray[i].name != NULL) //����ط�Ҫ��ô����
		{
			free(tArray[i].name);
		}
	}

	if (tArray != NULL)
	{
		free(tArray);
		tArray = NULL; //��������
	}
}

void main()
{
	int i = 0;
	struct AdvTeacher *pArray  = creatTArray(4);
	if (pArray == NULL)
	{
		return ;
	}

	for (i=0; i<4; i++)
	{
		int tmp = 0;

		char *p = pArray[i].a_name;

		printf("\n������age: " );
		scanf("%d", &(pArray[i].age) ) ;

		printf("\n����������: " );
		scanf("%s", pArray[i].name);

		printf("\n���������: " );
		scanf("%s", p);
	}

	printf("\nsorted before\n");
	printtArray(pArray, 4 );

	printf("\nsorted after\n");
	sorttArray(pArray, 4 );
	printtArray(pArray, 4 );

	freeTArray(pArray, 4);


	system("pause");
}

