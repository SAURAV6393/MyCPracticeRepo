#include<stdio.h>
#include<limits.h>
int main()
{
   // int arr[10] = {12,89,45,42,72,33,44,54,91,56};
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    int max = INT_MIN,i;
    int smax = INT_MIN;
    // for(i=0;i<=9;i++)
    // {
    //     if(max<arr[i]){
    //         max = arr[i];
    //     } 
    // }
    // printf(" FIRST MAXIMUM VALUE IS %d\n",max);
    //  for(i=0;i<=9;i++)
    // {
    //     if(smax<arr[i] && arr[i]!=max)
    //     {
    //         smax = arr[i];
    //     } 
    // }
     for(i=0;i<=9;i++)
    {
        if(max<arr[i]){
            smax = max;//smax is now previous max
            max = arr[i];// max is now a new max
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax = arr[i];
        }
    }                                  
    printf("SECOND LARGEST MAXIMUM VALUE IS %d",smax);   
}
