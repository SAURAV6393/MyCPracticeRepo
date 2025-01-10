#include<stdio.h>
int factorial(int n)
{
    int fact = 1;
    for(int i=2;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;

}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact = factorial(n-1);
    printf("ANS IS %d",fact);
}