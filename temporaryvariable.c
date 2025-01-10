#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b is ");
    scanf("%d%d",&a,&b);
    //create a temporary variable to store the value of a 
    int temp = a;
    //swap the value of a and b
    a=b;
    b=temp;
    printf("the value of a is %d and b is %d",a,b);
}