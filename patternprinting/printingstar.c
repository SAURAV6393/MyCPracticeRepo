#include<stdio.h>
int main()
{
    int x,z;
    printf("Enter no. of rows:");
    scanf("%d",&x);
    z=x;
    for(int i=1;i<=x;i++)//Represent no. of lines//
    {
        for(int j=1;j<=z;j=1)//Represent no. of columns//
        {
            printf("*");
            z=z-1;
        }
        printf("\n");
    }
}