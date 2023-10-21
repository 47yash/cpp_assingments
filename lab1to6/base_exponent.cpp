#include<iostream>
using namespace std;
int main()
{
	int base, exponent,power=1;
	cout<<"enter base and exponent :"<<endl;
	cin>>base>>exponent;
	for (int i=1;i<=exponent;i++)
	{
		power=base*power;
	}
	cout<<"power is: "<<power;
}
