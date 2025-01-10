//PRINT MAXIMUM ELEMENT IN ARRAY
#include<stdio.h>
int main()
{
    int arr[5]={4,5,1,6,2};
    int max = arr[0];
    for(int i=1;i<5;i++)
    {
    if(arr[i]>max)
    {
        max = arr[i]; 
    }
    }
    printf("%d",max);   
}