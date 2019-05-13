/*联合*/
#include <stdio.h>
union u_tag
{
	int i_val;
	float f_val;
	double d_val;
	char c_val;
	int *pi_val;
	char *pc_val;
};
struct B
{
	int i_val;
	float f_val;
	double d_val;
	char c_val;
	int *pi_val;
	char *pc_val;
};
struct A
{
	int num;
	char name[24];
	union u_tag u1;
	char cls[12];
};

struct D
{
	int num;
	char name[24];
	union u_tag0
	{
		int i_val;
		float f_val;
		double d_val;
		char c_val;
		int *pi_val;
		char *pc_val;
	}u0;
	char cls[12];
};
struct C
{
	int num;
	char name[24];
	struct B u2;
	char cls[12];
};
int main()
{
	union u_tag u;
	struct C c1;
	struct C c2;
	struct C c3;
	struct C c4;
	struct A a1;
	struct A a2;
	struct A a3;
	struct A a4;
	struct A a5;
	struct A a6;
	printf("sizeof(union u_tag)=%ld\n",sizeof(union u_tag));
	printf("sizeof(u)=%ld\n",sizeof(u));
	u.i_val=100;
	printf("u.i_val=%d\n",u.i_val);
	u.d_val=1232.678;
	printf("u.d_val=%lf\n",u.d_val);
	printf("u.i_val=%lf\n",u.i_val);
	return 0;
}

