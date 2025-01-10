#include<stdio.h>
int main()
{
    int n,i;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n-1;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}