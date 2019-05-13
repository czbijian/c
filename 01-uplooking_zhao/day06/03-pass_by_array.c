/*数组传递*/
#include <stdio.h>
void print_arr(int arr[],int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}

}
void print_arr1(int *arr,int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}

}
int main()
{
	int a[]={1,2,3,4,5};
	int m=sizeof(a)/sizeof(a[0]);
	print_arr1(a,m);
	return 0;
}

