#include<stdio.h>
int main()
{
    int arr[5];
     for(int i=0;i<=4;i++)
       scanf("%d",&arr[i]);
     for(int i=4;0<=i;i--)
       printf("%d",arr[i]);
}