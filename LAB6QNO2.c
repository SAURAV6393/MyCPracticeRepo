#include<stdio.h>
#include<math.h>					
int main()
{
	int a,s=0,d;
	printf("Enter a number: ");
	scanf("%d",&a);
	for(int i=0;i<=a;i++)
	{ 
	d=2*i+1;
	printf("%d\n",d);
	s=s+pow(a,d);
	}   
	printf("\n%d",s);            
}
