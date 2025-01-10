#include<stdio.h>
int binarysearch(int[],int,int,int);
int main()
{
	int arr[]= {1,2,3,4,5,6,};
	//CALCULATE SIZE OF ARRAY
	int n = sizeof(arr)/sizeof(arr[0]);
	int findno = 5;
	int result = binarysearch(arr,0,n-1,findno);
	if(result==-1)
	printf("ELEMENT IS NOT PRESENT");
	else 
	printf("ELEMENT IS PRESENT AT INDEX = %d",result);
}
int binarysearch(int a[],int low,int high,int val)
{
	while(low<=high)
	{
		int mid = (low+high)/2;
		if(a[mid]==val)
		return mid;
		if(a[mid]<val)
		low = mid + 1;
		else
		high = mid - 1;
	}
	return -1;
}