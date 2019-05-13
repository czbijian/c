/*数据类型float double*/
#include <stdio.h>
#include <float.h>
int main()
{
	float f1=678.901;
	double d1=123.456;
	printf("sizeof(float)=%ld\n",sizeof(float));
	printf("sizeof(double)=%ld\n",sizeof(double));
	printf("f1=%e\n",f1);
	printf("d1=%e\n",d1);
	
	printf("FLT_MAX=%e\n",FLT_MAX);
	printf("FLT_MIN=%e\n",FLT_MIN);
	printf("DBL_MIN=%e\n",DBL_MIN);
	printf("DBL_MAX=%e\n",DBL_MAX);
	return 0;
}
