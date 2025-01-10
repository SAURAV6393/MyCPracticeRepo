#include<stdio.h>5

int main()
{
    int x,y;
    printf("Enter no. of rows:");
    scanf("%d",&x);
    printf("Enter no. of columns");
    scanf("%d",&y);
    for(int i=1;i<=x;i++)//Represent no. of lines//
    {
        for(int i=1;i<=y;i++)//Represent no. of columns//
        {
            printf("%d",i);
        }
        printf("\n");
    }
}