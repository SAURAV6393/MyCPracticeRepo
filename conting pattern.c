//1
//2 3
//4 5 6
//7 8 9 10
#include<stdio.h>
int main()
{
	int i,j,steps,d=1;
	printf("Enter steps ");
	scanf("%d",&steps);
	
	for(i=1;i<=steps;i++){//ROWS
		for(j=1;j<=i;j++)//COLUMNS
		printf(" %d ",d++);
	    printf("\n");
    }
}