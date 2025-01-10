//find average of n no. of using array
#include<stdio.h>
int main()
{   int n,i;
    printf("ENETR SIZE OF ARRAY: ");
    scanf("%d",&n);
	int marks[n];
	float average , sum =0;
	printf("\nENTER no. OF element: ");
	for(i=0;i<n;i++)
	{    scanf("%d",&marks[i]);
		sum = sum + marks[i];
	}
	average = sum/n;
	printf("\nAVERAGE IS %f",average);
	
}
