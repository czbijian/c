#include <stdio.h>
int main()
{
	char str[20]="abcd";
	printf("%s\n",str);
	int i=0;
	for(i=0;i<20;i++)
	{
		if(str[i]=='\0')
		{
			
			printf("str[%d]=0\n",i);
		}
		else
		{
			printf("str[%d]=%c\n",i,str[i]);
		}
	}
	return 0;
}

