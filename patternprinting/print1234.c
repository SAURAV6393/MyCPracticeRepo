#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)//Represent no. of lines//
    {
        for(int j=1;j<=x;j++)//Represent no. of columns//
        {
            printf("%d",j);
        }
        printf("\n");
    }
}