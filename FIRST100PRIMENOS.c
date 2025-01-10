#include<stdio.h>
int main()
{
	int i,j,count = 0,n;
	printf("Enter first prime numbers: ");
	//scanf("%d",&n);
	for(i=2;i<=100;i++)
	{
	for(j=2;j<=i/2;j++)
	 {
		if(i%j==0)
		{
			break;
		}
	 }
	if(i==j)
	{
		printf("%d",i);
		count++;
	}
	if(count==100)
	{break;
	}
	printf("\n");
	return 0;
	}
	
}