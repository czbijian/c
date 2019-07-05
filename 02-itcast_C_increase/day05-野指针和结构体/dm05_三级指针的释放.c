#include <stdio.h>
#include <stdlib.h>

int creat_res_FREE(char***ppp,int count,int cnt1)  //三级指针分配作输出
{
	int err = 1;
	int i = 0;
	char**src=*ppp; 
	
	if (src == NULL)
	{
		err = 0;
		printf("分配失败\n");
		return err;
	}
	for (i = 0;i<count;i++)
	{
		if (src[i] != NULL) 
		free(src[i]);
	}
	free(src);
	
	*ppp=NULL;;
	return err;
}

int main(){
	
	return 0;
}
