#include<stdio.h>
int main()
{
	int size,max,i;
	int arr[]= {23,5,56,2,32,43};
        size = sizeof(arr)/sizeof(arr[0]);
	    max = arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]>max){
		max= arr[i];
	 } 
  }
  printf("saurav %d",max);
}