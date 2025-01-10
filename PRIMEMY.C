#include<stdio.h>
int main()
{
	int x,i;
	printf("\nEnter a number:");
	scanf("%d",&x);
	for(i=2;i<=x;i++)
	if(x%i==0)
	break;
	if(i==x)
	printf("%d is a prime number",x);
	else
	printf("%d is not a prime number",x);
}