/*二维数组参数传递*/
#include <stdio.h>
void print_arr(int arr[][5],int r,int c)
{
	int i=0;
	int j=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
		}
	}

}
int main()
{
	int a[][5]={{1,2,3,4,5},{6,7,8,9,0}};
	print_arr(a,2,5);
	return 0;
}

