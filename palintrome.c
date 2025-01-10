#include<stdio.h>
int main()
{
    int n,temp;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sum = 0;
    temp = n;
    int rem;
    while(n>0)
    {
        rem = n% 10;
        sum = sum * 10 + rem;
        n = temp / 10;
    }
    printf("%d",sum);
}