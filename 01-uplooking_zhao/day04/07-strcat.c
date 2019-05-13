/*字符串连接*/
#include <stdio.h>
int main()
{
	char a[20]={'\0'};
	char b[20]={'\0'};
	printf("串一\n");
	scanf("%s",a);
	printf("串二\n");
	scanf("%s",b);
	int i=0;
	int j=0;
	for(i=0;a[i]!='\0';i++);
	for(j=0;b[j]!='\0';j++,i++)
	{
		a[i]=b[j];
	}
	a[i]='\0';
	printf("%s\n",a);
	return 0;
}

