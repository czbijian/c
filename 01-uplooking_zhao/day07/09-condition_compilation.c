#include <stdio.h>
#define code 1
#define max(A,B) (A)>(B)?(A):(B)
#if code==1
#undef max
#endif
#define A 1
#define B 2
#if B==2
#undef A
#define A 3
#endif

/*void A(int m,int n)
{
	int l=max(m,n);
	printf("l=%d\n",l);
}*/
int max(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	return y;
}

/*void B(int m,int n)
{
	int k=max(m,n);
	printf("k=%d\n",k);
}*/
int main()
{
	double x;
	x=max(123.4,123.5);
	printf("x=%lf\n",x);
	return 0;
}

