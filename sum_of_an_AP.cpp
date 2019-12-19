#include<iostream>
using namespace std;
int main()
{
	int a=5,d=2,n;
	cin>>n;
	for(int i=5;i<=a+(n-1)*d;i=i+2)
	{
	cout<<i<<" ";
		
	}
		cout<<"\n";
		cout<<"Sum of all term is "<<(2*a+(n-1)*d)*n/2<<"\n";
		cout<<"Nth trem is "<<a+(n-1)*d;
	return 0;
}
