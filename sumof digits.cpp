#include<stdio.h>
int main()
{
	int x,r,q,sum=0;
	printf("Enter a number: ");
	scanf("%d",&x);
	while(x>0)
	{
		r=x%10;
		x=x/10;
		sum=sum+r;
	}
	printf("sum of digits = %d",sum);
}