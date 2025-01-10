#include<stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    int brr[5],i,j=4;
    for(i=0;i<=4;i++)
    {
       brr[j-i]=arr[i];
       //printf("\nsecond array %d",brr[j-i]);
    }
    printf("brr[5] = {%d,%d,%d,%d,%d}",brr[0],brr[1],brr[2],brr[3],brr[4]);
}
    