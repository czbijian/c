#include <stdio.h>
char* strcpy1(char *str1,char *str2)
{
	int i=0;
	for(i=0;str2[i]!='\0';i++)
	{
		str1[i]=str2[i];
	}
	str1[i]='\0';
	return str1;

}
char* strcat1(char *str1,char *str2)
{
	int i=0;
	int j=0;
	for(i=0;str1[i]!='\0';i++);
	for(j=0;str2[j]!='\0';j++)
	{
		str1[i+j]=str2[j];
	}
	str1[i+j]='\0';
	return str1;
}
int main()
{
	char a[]="abcd";
	char b[10];
	char *p;
	p=strcpy1(b,a);
	printf("b=%s\n",b);
	printf("p=%s\n",p);
	return 0;
}

