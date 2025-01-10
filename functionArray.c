#include<stdio.h>
void fun(int x[])//array ki value change ho jati hai function mei C,C++,JAVA(pass by value)
{ int temp = x[0];
  x[0] = x[1];
  x[1] = temp;
}
int main()
{   int arr[2] = {4,5};
    printf("BEFORE SWAPPING %d and  %d",arr[0],arr[1]);
    fun(arr);
    printf("\nAFTER SWAPPING %d and  %d",arr[0],arr[1]);
    return 0;
}