#include<iostream>
using namespace std;;
int main ()
{
    int n ;
    int sum = 1;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = n; i<=n ; i--)
    {
        sum *= i;
    }
    cout<<"Factorial is "<<sum;
}