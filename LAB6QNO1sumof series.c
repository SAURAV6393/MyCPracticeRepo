
#include<stdio.h>
#include<math.h>
int main()
{
	int a,s=0,i,p,d;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("SERIES IS:");
	for(i=1;i<=a;)
	{
	for(p=2;p<=a+1;p++)
	{	
	d= (pow(i,p));
	printf(" %d +",d);	
	s = s+ d;
	i++;}
	}
	printf("\nSUM OF SERIES : %d",s);
}