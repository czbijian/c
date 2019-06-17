#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*
void *  __cdecl memcpy(void *, const void *, size_t);
int     __cdecl memcmp(const void *, const void *, size_t);
void *  __cdecl memset(void *, int, size_t);
char *  __cdecl _strset(char *, int);
char *  __cdecl strcpy(char *p1, const char *p3);
char *  __cdecl strcat(char *, const char *);
int     __cdecl strcmp(const char *, const char *);
size_t  __cdecl strlen(const char *);
*/

void main111()
{
	char a[] = "i am a student";
	char b[64];
	int  i = 0;

	for (i=0; *(a+i) != '\0'; i++)
	{
		*(b+i) = *(a+i);
	}

	//0没有copy到b的buf中.

	b[i] = '\0'; //重要
	printf("a:%s \n", a);
	printf("b:%s \n", b);

	system("pause");
	return ;
}

int  copy_str2(char *from , char *to)
{
	int ret = 0;
	if (from ==NULL || to== NULL)
	{
		ret = -1;
		printf("func copy_str2() err: %d, (from ==NULL || to== NULL)", ret);
		return ret;
	}
	
	for (; *from!='\0'; from ++, to++ )
	{
		*to = *from;
	}
	*to = '\0';
	return ret;
}

int  copy_str211(char *from , char *to)
{
	int ret = 0;
	if (from !=NULL && to!= NULL)
	{
		for (; *from!='\0'; from ++, to++ )
		{
			*to = *from;
		}
		*to = '\0';
	}

	return ret;
}

//因为后缀++的优先级,高于，*p;
void copy_str3(char *from , char *to)
{
	while(*from != '\0')
	{
// 		*to = *from;
// 		to ++;
// 		from ++;
		*to ++ = *from++;
	}
	*to = '\0';
}

//因为后缀++的优先级,高于，*p;
void copy_str4(char *from , char *to)
{
	while((*to ++ = *from++) != '\0')
	{
		;
	}
}

void main22()
{
	int rv = 0;
	char from[100] = {0};
	char to[100] = {0};
	strcpy(from, "fromabc");
	rv = copy_str2(from, to);
	if (rv != 0)
	{
		printf("func copy_str2:%d", rv);
		return ;
	}

	printf("%s", to);
	system("pause");
}
