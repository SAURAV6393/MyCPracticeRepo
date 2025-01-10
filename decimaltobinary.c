#include<stdio.h>
#include<math.h>
int main()
{
	int dnum,rem,n,bnum=0,i=0;
	printf("Enter decimal integer number ");
	scanf("%d",&dnum);
	n=dnum;
	while(dnum!=0)
	{
		rem= dnum%2;
		bnum=bnum + rem*pow(10,i);
		dnum=dnum/2;
		i++;
	}
	printf("\n The binary of %d is %d",n,bnum);
}