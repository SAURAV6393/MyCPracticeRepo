// 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 
#include<stdio.h>
int main()
{
	int n = 15, a=0,b=1,c;
	for(int i=0;i<n;i++)
	{
	printf("%d ",a);
	c=a+b;
	a=b;
	b=c;
	}
}









//{
//int a=0,b=1,c,n;
//printf("Enter a number: ");
//scanf("%d",&n);
//printf("%d %d",a,b);
//int i=2;
//while(i< n)
//{
//	c=a+b;
//	a=b;
//	b=c;
//	printf(" %d",c);
//	i=i+1;
//}
//}
