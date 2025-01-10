#include<stdio.h>
int main()
{
	int x,r,;
	scanf("%x",&x);
	int i;
	while(x>0)
	{
		r=x%10;
		printf("%d",r);
		x=x/10;
	}

}