
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void main2()
{
	int i = 0;

	//指针数组
	char *   p1[] = {"123", "456", "789"};
	
	{
		int a[3];
		&a[2];
		&p1 +1;  
		&(p1[2]) ; 

	}

	//二维数组
	char p2[3][4]  = {"123", "456", "789"};

	//手工二维内存
	char **p3 = (char **)malloc(3 * sizeof(char *)); //int array[3];
	
	for (i=0; i<3; i++)
	{
		p3[i] = (char *)malloc(10*sizeof(char)); //char buf[10]
		if (p3[i] == NULL)
		{

		}
		sprintf(p3[i], "%d%d%d", i, i, i);
	}
}

void main222()
{
	char *a = 0;
	free(a);
}


void main()
{
	main222();
	system("pause");
}
