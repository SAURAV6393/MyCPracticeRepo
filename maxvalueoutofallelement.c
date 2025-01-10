#include<stdio.h>
#include<limits.h>//ISH TIME KYA VALUE MINIMUM OR MAXIMUM VALUE BTA DETA HAI INTEGER MEI
int main()
{
    int i,max,arr[10] = {12,34,45,42,60,33,44,54,21,56};
    max= arr[0];
    for(i=1;i<10;i++)
    {
        if(max<arr[i])
        { max = arr[i];}
    }
         printf("MAXIMUM VALUE OUT OF ALL ELEMENTS IS %d",max);
 //int max = INT_MIN;
 //printf("%d",max);
} 