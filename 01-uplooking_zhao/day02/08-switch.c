#include <stdio.h>
int main()
{
	char select;
	printf("(A)意大利\n");
	printf("(B)巴黎\n");
	printf("(C)日本\n");
	printf("请选择城市\n");
	scanf("%c",&select);
	switch(select)
	{
		default:
			printf("输入错误\n");
			break;
		case 'a':
		case 'A':
			printf("意大利1000元\n");
			break;
		case 'b':
		case 'B':
			printf("巴黎2000元\n");
			break;
		case 'c':
		case 'C':
			printf("日本3000元\n");
			break;
	}
	return 0;
}

