/*字符数组*/
/*字符串*/
#include <stdio.h>
int main()
{
//	char a[4]={'x','b','c','d'};
//	char b[5]={'x','b','c','d','\0'};
//	char c[]={'m','n','c','d','\0'};
	char d[]="hjkl";
//	printf("%s\n",a);
//	printf("%s\n",b);
//	printf("%s\n",c);
//	printf("%s\n",d);
	printf("sizeof(d)=%ld\n",sizeof(d));
	d[2]='s';
	printf("d[2]=%c\n",d[2]);
	return 0;
}

