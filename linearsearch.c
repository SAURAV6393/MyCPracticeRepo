#include<stdio.h>
int linearsearch(int[],int,int);
int main()
{
	int arr[5] = {4,6,1,3,2};
	//CALCULATE SIZE OF ARRAY
	int n = sizeof(arr)/sizeof(arr[0]);
	int findno = 3;
	int result = linearsearch(arr,n,findno);
	if(result==-1)
	printf("ELEMENT IS NOT PRESENT");
	else
	printf("ELEMENT IS PRESENT AT INDEX = %d",result);
}
int linearsearch(int arr[],int n ,int findno)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==findno)
		return i;
	}
	return -1;
}