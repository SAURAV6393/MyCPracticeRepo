#include<stdio.h>
int dish( int y)
{
    int i=1;
    while (i<=y)
    {
        printf("%d",i);
        i++;
    }
    return 0;
}
int main()
{
    int x, k;
    printf("Enter a number: ");
    scanf("%d",&x);
    k= int dish(x);
    return 0;
}
