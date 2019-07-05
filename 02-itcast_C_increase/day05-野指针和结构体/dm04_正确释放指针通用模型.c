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
	//声明指针变量的时候null
	char *p = NULL;
	p = (char *)malloc(100);

// 	
// 	if (p != NULL)
// 	{
// 		free(p);
// 		p = NULL;
// 	}

	myfree(&p);
	//业务关系复杂

	//此处省略5000行

	//此处省略5000行//此处省略5000行//此处省略5000行


	//此处省略5000行



	if (p != NULL)
	{
		free(p);
		p = NULL;
	}



	system("pause");
}
