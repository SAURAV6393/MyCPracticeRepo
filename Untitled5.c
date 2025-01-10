//BUBBLE SORT 
#include<stdio.h>
int main()
{   int i,j,n=7,temp;
	int arr[7]={7,6,5,9,3,4,1};
	printf("UNSORTED ARRAY: ");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	//BUBBLE SORT process
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			temp=arr[j];
			arr[j]= arr[j+1];
			arr[j+1] = temp;
		}
	 }
	 printf("\nSORTED ARRAY: ");
	 for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	} 
}