#include<stdio.h>
int main()
{
	int arr[5]={5,9,7,1,4};
	int n=5,temp;
	//PRINT ARRAY ELEMENT
	printf("UNSORTED ARRAY: "); 
	for(int i=0;i<5;i++)
	printf("%d ",arr[i]);
	//BUBBLE SORT
	printf("\nSORTED ARRAY: ");
	for(int i=0;i<n-1;i++)
	{
	 for(int j=0;j<n-1-i;j++)
	 {
	 	if(arr[j]>arr[j+1])
	 	{
	 		temp = arr[j];       arr[j] = arr[j+1];       arr[j+1] = temp;
		}
	 } 
	}
	for(int i=0;i<5;i++)
	printf("%d ",arr[i]); 	
}