#include<iostream>
using namespace std;
int main()
{
	int i=25;
	if(i>10&&i<20)
	{
		cout<<"Greater than 10 but less than 20";
	}
	else if(i>20)
	{
		cout<<"Greater than 20";
	}
	else
	{
		cout<<"Smaller than 10";
	}
	return 0;
}
