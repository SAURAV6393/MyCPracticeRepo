#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number ");
	scanf("%d",&x);
	if (x>0)
	printf("POSITIVE");
	else if(x<0)
	printf("NEGATIVE");
	else
	printf("ZERO");
	
}