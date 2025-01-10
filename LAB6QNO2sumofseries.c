//S= X + X*3 + X*5 + X*7 + .......
#include<stdio.h>
#include<math.h>					
int main()
{
	int a,i,s=0,d,p,x;
	printf("Enter number of terms: ");
	scanf("%d",&a);
	printf("Enter the value of x: ");
	scanf("%d",&x);
	
	printf("SERIES IS:");
	for(i=0;i<a;i++)
	{ 
	d=2*i+1;
	p= pow(x,d);
	printf("%d ",p);
	s=s+p;
	
	}   
	printf("\nSUM OF SERIES IS: %d",s);            
}