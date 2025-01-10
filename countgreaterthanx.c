// count the number of elements in given array greater than a given number x.
#include<stdio.h>
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int count = 0 ,x=3,i;
    for(i=0;i<=arr[6];i++)
    {
        if(x<arr[i])
        count++;
    }
   printf("The number of elements in a given array greater than a %d is %d",x,count);
}