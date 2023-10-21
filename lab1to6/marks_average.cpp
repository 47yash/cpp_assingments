#include<iostream>
using namespace std;
 int main()
 {
 	int sum,a,b,c,d,e;
 	float avg;
 	for (int i=0;i<=4;i++)
 	{
 		cout<<"enter marks"<< endl;
 		cin>>a>>b>>c>>d>>e;
 		sum=a+b+c+d+e;
 		avg=sum/5;
 		cout<<"avg is "<<avg<<endl;
	}
 }
