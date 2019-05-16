//	冒泡排序
#include <stdio.h>
#define ARRSIZE	5
int main()
{
	int arr[ARRSIZE] = {12,45,10,10,23};
	int i,j;
	int temp;
	int flag;
	for(i=0;i<ARRSIZE-1;i++){
		flag=0;
		for(j=0;j<ARRSIZE-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag=1;
			}		
		}
		if(flag==0){
			break;
		}
	}
	for(i=0;i<ARRSIZE;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}


