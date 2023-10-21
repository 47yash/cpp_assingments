#include<iostream>
using namespace std;

int main(){
	int n, sum=0;
	do{
		cin>>n;
		sum+=n;
	}while(n!=0);
	cout<<"total sum"<<sum;
	return 0;
}
