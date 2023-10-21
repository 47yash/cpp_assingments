#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a, rem,c;
	int sum =0;
	int count =0;
	cout<<"enter number :"<<endl;
	cin>>a;
	int num=a;
	while(num!=0){
		num= num/10;
		++count;
	}
	num=a;

	while(a!=0){
		rem = num%10;
		sum	= (sum*10)+ round(pow(rem,count));
		num = num/10;
	}
	cout<<sum<<endl;
	cout<<num<<endl;
	
	if(a == sum){
		cout<<"not armstrom"<<endl;
	}
	else
	{
		cout<<"armstrom"<<endl;
	}
	return 0;
}
