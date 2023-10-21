#include<iostream>
using namespace std;
int main()
{
	int n;
	n=0;
	cout<< "prime numbers from 1 to 50:"<<endl;
	for (int i=2;i<=50;i++)
	{  int cnt =0; 
	for(int j=1; j<=i;j++){
			if(i%j ==0 ){
		cnt++;
		}
	}
	if (cnt==2){
		n++;
		cout<<i<<endl;
			}
	}
	cout<<"total prime number from 1 to 50: "<<n;
	
}
