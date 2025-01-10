#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter a number: ");
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    for(int i=4;0<=i;i--)
    printf("\n%d",arr[i]);
}