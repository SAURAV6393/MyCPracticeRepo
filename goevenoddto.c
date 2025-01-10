#include<stdio.h>
int main ()
{
	int num;
	printf("\n Enter a number :  ");
	scanf("%d",&num);
	if(num%2==0)
	goto even;
	else
	goto odd;
	odd:
		printf("\n the number = %d is odd",num);
        return 0;
	even:
		printf("\n the number =%d is even",num);
		return 0;
	 
	 
	 
	 
	 }
