//swapping number in array
#include<stdio.h>
int main()
{
    int num[26],temp;
    num[0]=100;
    num[25]=200;
    temp=num[0];
    num[0]=num[25];
    num[25]=temp;
    printf("\n%d %d ",num[0],num[25]);
}