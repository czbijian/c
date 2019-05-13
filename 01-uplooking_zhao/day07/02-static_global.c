/*静态外部变量*/
#include <stdio.h>
static int x=50;
int y=10;
void A()
{
	x=100;
	printf("b.c文件中的x=%d\n",x);
	printf("b.c文件中的&x=%p\n",&x);

}
void B()
{


}
/*int main()
{
	A();
	x=300;
	printf("x=%d\n",x);
	return 0;
}*/

