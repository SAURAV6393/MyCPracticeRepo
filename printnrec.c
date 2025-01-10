#include<stdio.h>
int dish( int y)
{
    int i=1;
    while (i<=y)
    {
        printf("%d\n",i);
        i++;
    }
    return;
}
int main()
{
    int x, k;
    printf("Enter a number: ");
    scanf("%d",&x);
    k =dish(x);
    return 0;
}
