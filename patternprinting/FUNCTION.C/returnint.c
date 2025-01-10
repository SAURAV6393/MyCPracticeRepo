#include<stdio.h>
int sum(int a,int b)
{ int c;
c=a+b;
    printf("The sum of a and b is %d",c);
    printf("\nGOOOD BYE!");
    return a;
}
int main()
{ int a,b,c;
printf("Enter a & b number:  ");
scanf("%d%d",&a,&b);
int add = sum(a,b);
int d =a+b*c;
printf("\n%d",d);
printf("\n%d",add);
printf("\nTHANK YOU!");

}