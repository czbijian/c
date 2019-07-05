#include "stdio.h"
#include "stdlib.h"
#include "string.h"


struct AdvAdvTeacher
{
	char name[64];//64
	char *a_name; //4 //�ṹ��������һ��ָ��
	int age ; //4
	char **  stuname;//
};

int printtArray(struct AdvAdvTeacher *pArray, int num)
{
	int i = 0;
	int j = 0;
	for (i=0; i<num; i++)
	{
		printf("\n %d ", pArray[i].age);
		printf("%s ", pArray[i].name);
		printf("%s ", pArray[i].a_name);

		for (j=0; j<3; j++)
		{
			char **p2 = pArray[i].stuname;
			printf("%s ", p2[j]);
		}
	}
	return 0;
}

int sorttArray(struct AdvAdvTeacher *pArray, int num )
{
	int i = 0, j = 0;
	struct AdvAdvTeacher tmp;
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
		memset(p1+i, 0, sizeof(struct  AdvAdvTeacher));
		p1[i].a_name = (char *)malloc(128*sizeof(char)) ;// char buf[128*4]
		memset(p1[i].a_name , 0, 128*sizeof(char));
		//p1[i].stuname = (char **)malloc(100);

		{
			char **p2 = (char **)malloc(3*sizeof(char *));
			for (j=0; j<3; j++)
			{
				p2[j] =(char *) malloc(128*sizeof(char));
				memset(p2[j] , 0, 128*sizeof(char));
			}
			p1[i].stuname = p2;
		}
	}
	return p1;
}


void free2p(char **p ,int num)
{
	int i = 0; int j = 0;
	for (i=0; i<num; i++)
	{
		if (p[i] != NULL) 
		{
			free(p[i] );
		}			
	}
	free(p);
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

// 		//������ʱ�����˭�����������10Ԫ��ˮ��������
// 		if (tArray[i].name != NULL) //����ط�Ҫ��ô����
// 		{
// 			free(tArray[i].name);
// 		}
		//�ͷ��ֹ��Ķ�ά�ڴ�
		if (tArray[i].stuname != NULL) 
		{
			free2p(tArray[i].stuname, 3);
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
	int i = 0; int j = 0;
	struct AdvAdvTeacher *pArray  = creatTArray(4);
	if (pArray == NULL)
	{
		return ;
	}

	// 	{
	// 		//p
	// 		char *p = (char *)malloc(100);
	// 		free(p+1);
	// 	}

	for (i=0; i<2; i++)
	{
		int tmp = 0;

		char *p = pArray[i].a_name;

		printf("\n������age: " );
		scanf("%d", &(pArray[i].age) ) ;

		printf("\n����������: " );
		scanf("%s", pArray[i].name);

		printf("\n���������: " );
		scanf("%s", p);

		for (j=0; j<3; j++)
		{
			char **p2 = pArray[i].stuname;
			printf("\n������ѧ��������");
			scanf("%s", p2[j]);
		}
	}

	printf("\nsorted before\n");
	printtArray(pArray, 2 );

	printf("\nsorted after\n");
	sorttArray(pArray, 2 );
	printtArray(pArray, 2 );

	freeTArray(pArray, 2);


	system("pause");
}

