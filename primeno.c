#include<stdio.h>
int main()
{
	int num,i,x;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		while(num%i==0)
		{
		printf("%d is prime",num);
	}
	}
	printf("NOT PRIME");
}