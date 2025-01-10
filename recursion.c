#include<stdio.h>
#include<math.h>
int main()
{
    int k;
    k=f1(3);
    printf("%d",k);
}
int f1(int n)
{
    int s;
    if(n==1)
    return 1;
    s=n+f1(n-1);
    return (s);
}
