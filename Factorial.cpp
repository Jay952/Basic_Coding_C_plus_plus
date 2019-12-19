#include<iostream>
using namespace std;
int main()
{
	int n,k=1;
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		k*=i;
	}
	cout<<k;
	return 0;
}
