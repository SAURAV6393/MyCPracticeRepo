#include<iostream>
using namespace std;
void TOH(int n ,char from , char via, char to)
{
	if(n==1)
	{
		cout<<"move disk from "<<from<<" to "<<to;
	} 
	else
	{
		TOH(n-1 , from , to ,via)
		cout<<"move disk "<<n<<" from "<<from<< " to"<<to;
		TOH(n-1 , to, from , via)
	}
}
int main()
{
	int n = 3;
	char from = 'A';
	char to = 'C';
	char via = 'B';
	TOH(n,from,via,to);
}