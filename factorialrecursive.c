#include<stdio.h> 
#include<math.h>
int fact(int n)
{
	int s=1,f=1;
	for(int i=1;i<=n;i++)
	{
	  f= f*s*n;
	  return(fact(n-1));	
	}
      return(f);	
}
int main()
{
	int n,x;
	printf("ENTER A NUMBER ");
	scanf("%d",&n);
	x = fact(n);
	printf("%d",x);
	printf("\nGOOD BYE!");
	return 0;
	
}