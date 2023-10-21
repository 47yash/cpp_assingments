#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter array size\n";
	cin>>n;
	int* p=new int[n];
	for (int j=0;j<n;j++)
	{
		cin>>p[j];
		
		
	}
	for (int j=0;j<n;j++)
	{
		cout<<p[j];
	}
		
	delete []p;	
}
