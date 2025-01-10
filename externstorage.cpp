//file 1.c
#include<stdio.h>
#include<"math.c">
int  x;
void display (void);
void main()
{
	x= 10;
	printf("x in file.1 = %d",x);
	display();
}
//file2.c
#include<stdio.h>
extern int x;
void display()
{
	printf("x in file2. = %d",x);
}