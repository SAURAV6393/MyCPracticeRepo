//difference b/w sum of element even and odd  
#include<stdio.h>
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int even=0,odd=0,i,diff;
    for(i=0;i<=6;i++)
    {
        if(i%2==0)
        {
           even = even + arr[i];
          // printf("sum of even is %d ",even);
        }
        else
        {
            odd = odd + arr[i];
          //  printf("\nsum of odd is %d",odd);
        }
    }
     printf("sum of even is %d ",even);
        printf("\nsum of odd is %d",odd);
   
    diff = even - odd ;
    printf("\nDIFFERENCE IS %d",diff);
}