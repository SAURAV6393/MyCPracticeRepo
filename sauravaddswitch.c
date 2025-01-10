#include<stdio.h>
int main()
{
	int x,y,c,d;
	float e,f,g;
	printf("\n1. ADDITION");
	printf("\n2. SUBTRACTION");
	printf("\n3. MULTIPLICATION");
	printf("\n4. DIVISION");
	printf("\nEnter a value: ");
    scanf("%d",&x);
	switch(x) 
	{
	   case 1:
	   	printf("\nENTER A TWO NUMBER: ");
	   	scanf("%d %d",&x,&y);
	   	c=x+y;
	   	printf("\nSum is %d",c);
	   	break;  	
	   	case 2:
	   		printf("\n ENTER A TWO NUMBER: ");
	   		scanf("%d %d",&x,&y);
	   		c=x-y;
	   		printf("\nSubtraction is %d",c);
	   		break;
	   	case 3:
		   printf("\n ENTER A TWO NUMBER: ");
	   		scanf("%d %d",&x,&y);
	   		c=x*y;
	   		printf("\nMULTIPLICATION is %d",c);
	   		break;
	   	case 4:
	   		printf("\n ENTER A TWO NUMBER: ");
	   		scanf("%f %f",&f,&g);
	   		printf("%f is divisible by %f",f,g);
	   		e=f/g;
	   		printf("\nDIVISION is %f",e);	   	
	}	
}