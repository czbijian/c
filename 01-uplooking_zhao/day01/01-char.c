/*变量与数据类型*/
#include <limits.h>
#include <stdio.h>
int main()
{
	signed char c1;
	char c2;
	char c3;
	unsigned char c4;
	printf("sizeof(char)=%ld\n",sizeof(char));
	printf("sizeof(c1)=%ld\n",sizeof(char));
	printf("&c1=%p\n",&c1);
	c1='a';
	printf("c1=%c\n",c1);
	printf("c1=%d\n",c1);
	c1=10;
	c2=-50;
	c3=c1+c2;	
	printf("c3=%d\n",c3);
	c4=254;
	c1=254;
	printf("c4=%d\n",c4);
	printf("c1=%d\n",c1);
	printf("c3=%c\n",c3);
	printf("SCHAR_MIN=%d\n",SCHAR_MIN);
	printf("SCHAR_MAX=%d\n",SCHAR_MAX);
	return 0;
}

