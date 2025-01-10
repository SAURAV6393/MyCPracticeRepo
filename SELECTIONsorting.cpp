#include<stdio.h>
int main()
{
	int i,j,smlst,temp;
	int arr[] ={1,3,5,4,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("\nUNSORTED ARRAY:\n ");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\nSORTED ARRAY:  ");
	for(i=0;i<n-1;i++){
		printf("\n iteration no %d",i+1);
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{//swap
				printf("\n\t swap in arr[i] & arr[j] : %d %d",arr[i],arr[j]);
				
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nSORTED ARRAY:\n   ");
	 for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	} 
}