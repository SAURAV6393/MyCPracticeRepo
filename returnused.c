#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n==0){
        printf("\nN KI VALUE ZERO HAI ");
        return 0;
    }
        if(n==1){
        printf("\nN KI VALUE ONE HAI ");
        return 1;
    }
    printf("print ho gye mtlb phele vali condition true nhi hui ");
    if(n!=8){
        printf("\nyeh vala return hua ");
        return 2;
    }
    

}