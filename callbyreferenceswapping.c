//CALL BY REFERENCE
#include<stdio.h>
void swapval(int*,int*);
void swapval(int *a,int *b)
{
	int temp;
	printf("Before swapping:\nTHE VALUE OF a AND b IS %d AND %d",*a,*b);
	temp = *a;
	*a=*b;
	*b=temp;
	printf("\nAfter swapping:\nTHE VALUE OF a AND b IS %d AND %d\n",*a,*b); 
}
void main()
{
	int x,y;
	printf("ENTER THE VALUE OF X AND Y ");
	scanf("%d %d",&x,&y);
    swapval(&x,&y);
    printf("\nTHE VALUE OF x AND y IS %d AND %d\n",x,y);
}