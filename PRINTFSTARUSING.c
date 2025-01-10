//*
//* *
//* * *
//* * * *
#include<stdio.h>
int main()
{
	int i,r,j;
	printf("Enter a rows: ");
	scanf("%d",&r);
	for(i=1;i<=r;i++){
		for(j=1;j<=i;j++)
		printf("*");
		printf("\n");	
}
}