//WAP in c to print fibonacci series up to 10 terms 
#include<stdio.h>
int main()
{
int a=0,b=1,c,n;
printf("Enter a number: ");
scanf("%d",&n);
printf("%d %d",a,b);
int i=2;
while(i<=n)
{
	c=a+b;
	a=b;
	b=c;
	printf(" %d",c);
	i=i+1;
}
}