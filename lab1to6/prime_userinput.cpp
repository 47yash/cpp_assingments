#include<iostream>
using namespace std;
int main()
{
	int n,cnt;
	cin>>n;
	cnt=0;
	for (int i=1;i<=n;i++)
	{
		if(n%i ==0 )
		{
			cnt++;
		}
	}
	if (cnt==2)
	{
		cout<<"it is a prime";
	}
	else{
			cout<<"not prime";
		}
	}
