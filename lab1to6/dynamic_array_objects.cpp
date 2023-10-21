#include <iostream>
using namespace std;
class complex
{
	int real, img;
	public:
	void put()
	{
		cout<<"complex no is\t";
		cout<<real<<"+"<<img<<"i"<<endl;
	}
	void get()
	{
		cout<<"enter real and imaginary\t";
		cin>>real>>img;
	}
};
int main(){
	int n,i;
	cout<<"accept no objects"<<endl;
	cin>>n;
	complex* ptr = new complex[n];
	for(i=0;i<n;i++)
		{
			ptr[i].get();
		}
	for(i=0;i<n;i++)
	{
		ptr[i].put();
	}

}
