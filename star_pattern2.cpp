#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l=4;
	for(i=0;i<5;i++)
	{
	 for(j=0;j<5;j++)
	 {
	    if(j<4-i)
	    cout<<" ";
	 	else
	 	cout<<"*";
		 
		 }	
		 cout<<"\n";
	
	}
	return 0;
}
