/*goto*/
#include <stdio.h>
int main()
{
	goto B;
A:
	printf("A处代码\n");
B:

	printf("B处代码\n");
C:

	printf("C处代码\n");
	return 0;
}

