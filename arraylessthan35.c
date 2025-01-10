// 10 students marks are given find out student roll no less than 35 [roll no refer index value]
#include<stdio.h>
int main()
{
    int i,marks[10]={98,45,47,76,23,65,54,18,77,43};
    for(i=0;i<10;i++)
    {if(marks[i]<35)
    printf("ROLL NO. OF STUDENT IS %d\n",i);}
}