#include<stdio.h>
int prime(int y)
{
	for(int n=1;n<=y;n++)
	{ 
	while(y=n)
	{
	  return prime(y+1);
	  }
	while(y%n==0&&y%1==0)
		{
		printf("%d is not prime",y);
		}
		return 0;
	}
}
int main()
{
	int y,z,x; 
	printf("Enter a number: ");
	scanf("%d",&x);
	z= prime(x);
	printf("GOOD BYE!");
	return 0;
}