//AAAA
//BBB
//CC
//D
#include<stdio.h>
int main()
{
	int i,j,steps;
	printf("Enter steps ");
	scanf("%d",&steps);
	char ch=65;
	for(i=0;i<steps;i++){ 
		for(j=0;j<steps-i;j++)
		printf(" %c ",ch);
		printf("\n");	
	     ch++;
    }
}