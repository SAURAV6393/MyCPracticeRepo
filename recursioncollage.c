#include<stdio.h>
int factorial(int x)
{
	if(x==0)
	return 1;
	else if (x==1)
	return 1;
	else
	{
	printf("%d",x);
	return x*factorial(x-1);}
}
 int main()
 {
 	int f,n;
 	printf("Enter a number: ");
 	scanf("%d",&n);
 	f=factorial(n);
 	printf(" factorial of %d is %d",n,f);
 }