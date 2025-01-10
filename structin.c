#include<stdio.h>
#include<string.h>
int main ()
{
    struct date
    {
        int d ,m ,y;
    } d1 , d2 ;
    struct date d1 = {23 ,455,3};
    printf("Enter Date: ");
   // scanf("%d %d %d ",&d1.d,&d1.m,&d1.y);
    printf("%d %d %d ",d1.d,d1.m,d1.y);


}
