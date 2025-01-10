#include<stdio.h>
int main()
{
    int i , arr[3]={2,4,6},multi=1;
    for(i=0;i<3;i++)
    {
        multi=multi*arr[i];
    }
    printf("MULTIPLY OF ELEMENT IN A ARRAY IS %d ",multi);
}