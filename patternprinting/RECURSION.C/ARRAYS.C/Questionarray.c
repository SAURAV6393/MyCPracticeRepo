#include<stdio.h>
int main()
{
    int n,arr[10]={2,4,1,15,12,4,6,21,30,100};
    printf("Enter a number: ");
    scanf("%d",&n);
    int count =0;
    int c,sum=0;
    for(n;n>=0;n--)
    {
    for(int i=n;i>=n-3;i--)
       c=sum+arr[i];
       if(arr[n+1]>=c)
       count=count+1;
       else
       count;
    }
   printf("%d",count);
}