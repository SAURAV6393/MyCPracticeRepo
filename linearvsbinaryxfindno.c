#include<stdio.h>
int linersearch(int[],int,int);
void main()
{  
   int arr[] = {1,2,3,4,5,6,7,8,9};
   int n = sizeof(arr)/sizeof(arr[0]);
   // Calculate size of array
   // FIND NO. 2
   int findno = 5;
   int result = linearsearch(arr,n,findno);
    if(result==-1)
    printf("%d is NOT found",result);
    else
    printf("%d element present at %d index of arrray",findno,result);	
}
int linearsearch(int arr[],int n,int findno)
{	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==findno)
		return i;
	}
	return -1;
}
