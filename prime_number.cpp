#include<iostream>
using namespace std;
int main()
{
	int n,k=0;
	cin>>n;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		k=k+1;
		
		else
	    k=k;
	}
	if(k>0)
	cout<<"Not a prime number";
	else
	cout<<"prime number";
	return 0;
}
