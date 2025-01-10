#include<stdio.h>
int main()
{
    int x,z;
    printf("Enter no. of rows:");
    scanf("%d",&x);
    for(int i=x;i>=x;i--)//Represent no. of lines//
    {
        for(int j=x;j>=x+1-i;j--)//Represent no. of columns//
        {
            printf("*");
        }
        printf("\n");
    }
}