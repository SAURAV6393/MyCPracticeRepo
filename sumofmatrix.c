#include<stdio.h>
int main()
{
	int i,j;
	int m1[2][2]={1,2,3,4};
	int m2[2][2]={1,2,3,4};
	int m3[2][2];
	printf("MATRIX M1\n");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		printf(" %d ",m1[i][j]);
	}
		printf("\nMATRIX M2\n");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		printf(" %d ",m2[i][j]);
	}
		printf("\nADD MATRIX M1 & M2\n");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		m3[i][j] = m1[i][j] + m2[i][j];
	}
    printf("\nMATRIX M3\n");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		printf(" %d ",m3[i][j]);
	}

}