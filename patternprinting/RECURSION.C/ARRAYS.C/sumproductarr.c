#include<stdio.h>
int main()
{
    int n,s=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    int arr[n];
    for(int m=0;m<n;m++)
    {
     scanf("%d",&arr[m]);
    }
    for(int i=0;i<n;i++)
   {
     s=s*arr[i];
    }
    printf("%d",s);
}