#include<stdio.h>
#include<stdio.h>
int main()
{
    float mass,acc,height,velocity;
    printf("Enter the variables");
    scanf("%f %f %f %f",&mass,&acc,&height,&velocity);
    float energy = (mass*acc*height)+(mass*velocity*velocity);
    printf("The energy is %f",energy);


}