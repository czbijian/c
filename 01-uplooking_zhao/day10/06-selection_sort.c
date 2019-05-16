/*	选择法排序	*/
/*简单选择排序的基本思想：第1趟，在待排序记录r[1]~r[n]中选出最大的记录，将它与r[0]交换；
第2趟，在待排序记录r[2]~r[n]中选出最大的记录，将它与r[1]交换；
以此类推，第i趟在待排序记录r[i]~r[n]中选出最大的记录，将它与r[i]交换，
 使有序序列不断增长直到全部排序完毕。*/

#include <stdio.h>
 
void SelectSort(int A[],int n)
{
	for(int i = 0;i < n;i++ )
	{
		int max =i;
		for(int j = i+1;j < n;j++) //查找最大元素所在位置
		{
			if (A[j] > A[max])
			max =j;
		}
		int temp = A[max];  //交换无序后列中首元素与最大元素的位置
		A[max] = A[i];
		A[i] = temp;
	}
}
int main(){
	int i = 0;
	int a[10] = {8, 9, 6, 7, 5, 4, 3, 2, 1, 0};
	SelectSort(a, 10);
	for(i = 0; i < 10 ; i++){
		printf("%3d", a[i]);		
	}
	printf("\n");
	return 0;
}
