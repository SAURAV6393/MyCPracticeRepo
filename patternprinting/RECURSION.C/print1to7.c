#include<stdio.h>
int print(int y)
{
    int i=1;
    while(i<=y)
    {
        printf("\n%d",y);
        y--;
    }
    return 0;

}
int main()
{
    int x,y;
    printf("enter a number: ");
    scanf("%d",&y);
    x=print(y);
    return 0;

}