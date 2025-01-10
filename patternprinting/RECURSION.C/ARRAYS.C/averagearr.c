#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter 100 numbers: ");
    for(i=1;i<=9;i++)
    scanf("%d",&a[i]);

    for(i=1;i<=9;i++)
    sum=sum+a[i];
    avg=sum/100.0;
    printf("Average is %f",avg);

    printf("\n");
    return 0;
}