#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int sum =0,i;
    for(i=0;i<5;i++)
    {
        sum = sum + arr[i];
    }
    printf("THE SUM OF ALL ELEMENTS IN A ARRAY IS %d",sum);
}