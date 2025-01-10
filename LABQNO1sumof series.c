//S = 1^2 + 2^3 + 3^4 + ........
#include<stdio.h>
#include<math.h>
int main()
{
	int a,s;
	printf("Enter a number: ");
	scanf("%d",&a);
	s=0;
	for(int i=1;i<=a;)
	{
		for(int p=2;p<=a+1;p++)
	{
	s = s+ (pow(i,p));
	i++;}
	}
	printf("%d",s);
}