//S= X + X*3 + X*5 + X*7 + .......
#include<stdio.h>
#include<math.h>					
int main()
{
	int a,s=0,d=1,p,x;
	printf("Enter number of terms: ");
	scanf("%d",&a);
	printf("Enter the value of x: ");
	scanf("%d",&x);
	
	printf("SERIES IS:");
	for(int i=0;i<a;i++)
	{ 
	//printf(" %d",d);
	p= pow(x,d);
	d= 2*i;
	printf("\n ans%d ",d);
	printf("\n thik%d ",p);
	s=s+p;
	}   
	printf("\nSUM OF SERIES IS: %d",s);            
}