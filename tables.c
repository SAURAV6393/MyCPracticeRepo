#include<stdio.h>
int main()
{
    int s,d;
    printf("Enter the value:");
    scanf("%d",&s);
    int i=1;
    while(i<=10)
    {
        d=s*i;
        printf("\n%d*%d=%d",s,i,d);
        i++;
    }
}