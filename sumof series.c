#include<stdio.h>
#include<math.h>
int main()
{
	int a,s;
	printf("Enter a number: ");
	scanf("%d",&a);
	s=0;
	for(int i=1;i<=a;i++)
	{
	s = s+(pow(a,2i+1));
	}
	printf("%d",s);
}