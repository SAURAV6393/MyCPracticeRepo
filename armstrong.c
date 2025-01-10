 #include<stdio.h>
int main()
{
	int r,d,s=0,n,a;
	printf("enter a number:");
	scanf("%d",&n);
	
	d=n;
	while(n!=0)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	if(s==d)
	printf("%d is ARMSTRONG NUMBER",a);
	else
	printf("%d is NOT ARMSTRONG NUMBER",a);
}