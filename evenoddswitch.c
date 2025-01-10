#include<stdio.h>
int main()
{
	int x,num;
	printf("Enter a number: ");
	scanf("%d",&num);
	x=(num%2==0);
	switch(x)
	{
		case 1:
			printf("%d  is even",num);
			break;
	    case 0:
	    	printf("%d is odd",num);
			
	}
	
	 
}