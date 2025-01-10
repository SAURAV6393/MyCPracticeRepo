#include<stdio.h>
int main()
{   int arr[] = {3,8,6,7,5,4,10,9,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int findno = 9;
	int result = binarysearch(arr,0,n-1,findno);
	if(result==-1)
	printf("Element not found");
	else
	printf("Element is present at %d index",result);
}
int binarysearch(int[],int,int,int);
int binarysearch(int a[],int low,int high,int value)
{
	while(low<=high)
	{   int mid = (low+high)/2;
		if(a[mid]==value)
		return mid;
		if(a[mid]<value)
		low = mid + 1;
		else 
		high = mid - 1;
	}
	return -1;
} 