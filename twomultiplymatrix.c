#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;
	int r1 =3 , r2=3 ,c1 =3 ,c2 =3 , fr,fc;
	int m1[3][3] = { 1,2,3,4,5,6,7,8,9};
	int m2[3][3] = { 1,2,3,4,5,6,7,8,9};
	if(c1!=r2)
	{printf("\n NOT POSSIBLE "); exit(0) ;}
	fr=r1;fc=c2;int r[3][3];
	for(i=0;i<fr;++i)
	for(j=0;j<fc;++j)
	{
		r[i][j] = 0;
		for(k=0;k<c1;k++)
		{
			r[i][j] = r[i][j] +m1[i][k]*m1[k][j];} 
		}
		for(i=0;i<fr;i++)
		{ printf("\n");
		for(j=0;j<fc;++j)
		printf("\t r[%d][%d]= [%d]",i,j,r[i][j]);
		}
	
	
}