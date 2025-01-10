#include<stdio.h>
int main()
{
	int i,n,d;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		//d = n*i;
		//printf("%d * %d = %d\n",n,i,d);
		printf("%d\n",n*i);
	}
}