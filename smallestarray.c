//find smallest element in array
#include<stdio.h>
int main()
{
	int n,i;
	printf("ENTER A SIZE OF ARRAY: ");
	scanf("%d",&n);
	printf("ENTER THE ELEMENTS: ");
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf(" %d ",arr[i]);
	}
	int smlt = arr[0],pos =0;
	for(i=0;i<n;i++)
	{
		if(smlt>arr[i])
		{
			smlt = arr[i];
			pos = i;
		}
	}
	printf("\nSMALLEST ELEMENT = %d at %d index",smlt,pos);	 
} 