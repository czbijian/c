#include "stdio.h"
#include "stdlib.h"
#include "string.h"


//两个结构体变量之间的copy行为
struct Teacher
{
	char name[62];//64
	int age ; //4
};

int printtArray(struct Teacher *pArray, int num)
{
	int i = 0;
	for (i=0; i<num; i++)
	{
		printf("%d ", pArray[i].age);
	}
	return 0;
}

int sorttArray(struct Teacher *pArray, int num )
{
	int i = 0, j = 0;
	struct Teacher tmp;
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

struct Teacher *  creatTArray(int count)
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

void FreeTeacher(struct Teacher *p)
{
	if (p != NULL)
	{
		free(p);
	}
}

void main()
{
	int i = 0;
	struct Teacher *pArray  = creatTArray(4);
	if (pArray == NULL)
	{
		return ;
	}

	for (i=0; i<4; i++)
	{
		int tmp = 0;
		printf("\n请输入age: " );
		scanf("%d", &(pArray[i].age));
	}

	printf("\nsorted before\n");
	printtArray(pArray, 4 );

	printf("\nsorted after\n");
	sorttArray(pArray, 4 );
	printtArray(pArray, 4 );
	
	FreeTeacher(pArray);
	pArray = 	NULL;

	system("pause");
}

