#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "malloc.h"


char ** spitString_Creat(int mycount)
{
	int i = 0;
	char **myarray = NULL;

	if (mycount > 1000)
	{
		return NULL;
	}
		 
	myarray = (char **)malloc(mycount*sizeof(char *));
	if (myarray == NULL)
	{
		return NULL;
	}
	for (i=0; i<10; i++)
	{
		myarray[i] = (char *)malloc(100);
	}

	return myarray;
}

void  spitString05_free(char **myarray, int ncount)
{
	int i = 0;

	if (myarray == NULL)
	{
		return ;
	}
	for (i=0; i<ncount; i++)
	{
		free(myarray[i]);
	}
	if (myarray)
	{
		free(myarray);
	}
	myarray = NULL;
}

void main()
{
	int i; 
	int ncount = 10;
	char **myarray = NULL;
	char ** myarray1;
	char **myarray2;
	char **myarray3;
	myarray1 = spitString_Creat(10);
	if (myarray1 == NULL)
	{
		printf("func spitString_Creat()1 \n");
		goto End;
	}
	myarray2 = spitString_Creat(10000);
	if (myarray2 == NULL)
	{
		spitString05_free(myarray1, 10);
		printf("func spitString_Creat()2 \n");
		goto End;
	}

	myarray3 = spitString_Creat(10);
	if (myarray3 == NULL)
	{
		printf("func spitString_Creat()3 \n");
		goto End;
	}

	for (i=0; i<ncount; i++)
	{
		printf("%s\n", myarray[i]);
	}
End:
	spitString05_free(myarray1, 10);
	spitString05_free(myarray2, ncount);
	spitString05_free(myarray3, 10);

	system("pause");
}


