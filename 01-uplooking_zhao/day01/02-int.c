/*数据类型int*/
#include <stdio.h>
#include <limits.h>
int main()
{
	int a1=1000;
	signed int a2;
	unsigned int a3;
	short int a4;
	signed short int a5;
	unsigned short int a6;
	long int a7;
	signed long int a8;
	unsigned long int a9;
	long long m;
	printf("sizeof(int)=%ld\n",sizeof(int));
	printf("sizeof(short)=%ld\n",sizeof(short));
	printf("sizeof(long)=%ld\n",sizeof(long));
	printf("a1=%d\n",a1);
	printf("INT_MIN=%d\n",INT_MIN);
	printf("INT_MAX=%d\n",INT_MAX);
	printf("UINT_MAX=%u\n",UINT_MAX);

	return 0;
}
