#include<stdio.h>
int main()
/*	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int i=2;
	while(i<=0)
	{
		if(n%i!=0)
		{
			printf("prime");
			break;
		}
		else
		{
			printf("prime");
			break;	
		}
		i=i+1;
	}
}*/
{
int a=0,b=1,c,n;
printf("Enter a number: ");
scanf("%d",&n);
printf("%d%d",a,b);
int i=2;
while(i<=n)
{
	c=a+b;
	a=b;
	b=c;
	printf("%d",c);
	i=i+1;
}
}