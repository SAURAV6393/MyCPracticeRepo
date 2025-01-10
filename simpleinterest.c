#include<stdio.h>
int main()
{
    float simple_interest, princple,rate,time;
    printf("Enter the value of princple is ");
    scanf("%f",&princple);
    printf("Enter the value of rate is ");
    scanf("%f",&rate);
    printf("Enter the value of time is ");
    scanf("%f",&time);
    simple_interest = princple*rate*time/100;
    printf("The value of simple_interest is %f",simple_interest);

}




