#include<stdio.h>
int main()
{
    int p;
    printf("enter percentage ");
    scanf("%d",&p);
    if(p>=75)
    printf("first with honor");
    else if (p>=60)
    printf("first");
    else if (p>=45)
    printf("second");
    else if (p>=33)
    printf("third");
    else 
    printf("fail");


}