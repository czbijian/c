/*指针与字符串*/
#include <stdio.h>
int main()
{
	char name1[]="green";
	char name2[]={'g','r','e','e','n','\0'};
	char *p;
	p=name1;
	p[2]='x';
	printf("name1=%s\n",name1);
	printf("p=%s\n",p);
	char *p1="green";
	char *p2="green";
	char *p3="gree";
	p1="hello";
	//p1[2]='x'; //segment error
	printf("p1=%s\n",p1);
	printf("name1=%p\n",name1);
	printf("name2=%p\n",name2);
	printf("p=%p\n",p);
	printf("p1=%p\n",p1);
	printf("p2=%p\n",p2);
	printf("p3=%p\n",p3);
	return 0;
}

