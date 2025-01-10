#include<stdio.h>
int main()
{ //Maximum among 3 number by using conditional operator
	int a,b,c,max;
	printf("Enter the number: ");
	scanf("%d%d%d",&a,&b,&c);
	max = (a>b && a>c) ? (a) :( (b>c) ? (b):(c) );
	printf("\nMaximum is %d",max);	
}