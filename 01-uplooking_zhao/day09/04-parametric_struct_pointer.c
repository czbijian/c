/*构造类型传参*/
#include <stdio.h>
#include <string.h>
struct pro
{
	char name[20];
	int price;
	int number;
};
int cal(struct pro *pro1)
{
	int money;
	money=pro1->price*pro1->number;
	strcpy(pro1->name,"谭C");
	return money;
}
int main()
{
	struct pro pro1;
	printf("商品名称\n");
	scanf("%s",pro1.name);
	printf("商品价格\n");
	scanf("%d",&pro1.price);
	printf("商品数量\n");
	scanf("%d",&pro1.number);
	int sum=cal(&pro1);
	printf("sum=%d\n",sum);
	printf("商品名称:%s\n",pro1.name);
	return 0;
}

