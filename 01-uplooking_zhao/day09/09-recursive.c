#include <stdio.h>
void int_to_char(int v)
{
	int q;
	q=v/10;
	if(q!=0)
		int_to_char(q);
//	putchar(v%10+'0');
	printf("%c\n",v%10+'0');
}
int main()
{
	int_to_char(4267);
	return 0;
}

