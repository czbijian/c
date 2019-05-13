/*字符串复制*/
#include <stdio.h>
int main()
{
	int i=0;
	char a[30]={'\0'};
	char b[30]={'\0'};
	printf("串一\n");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	printf("b=%s\n",b);
	return 0;
}

