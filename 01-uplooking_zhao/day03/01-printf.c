/*printf  scanf*/
#include <stdio.h>
int main()
{
	int a1=10;
	unsigned a4=100;
	float a2=123.45;
	double a3=123.456;
	char a5='x';
	printf("变量a1=%d\n",a1);
	printf("变量a2=%f\n",a2);
	printf("变量a2=%e\n",a2);
	printf("变量a3=%lf\n",a3);
	printf("变量a3=%e\n",a3);
	printf("变量a5=%c\n",a5);
	printf("变量a5=%d\n",a5);

	printf("变量a1=%d\n",a1);
	printf("变量a4=%u\n",a4);
	printf("变量a1=%o\n",a1);
	printf("变量a1=%x\n",a1);
	printf("变量&a1=%p\n",&a1);

	return 0;
}

