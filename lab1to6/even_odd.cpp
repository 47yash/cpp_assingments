#include<iostream>
using namespace std;
int main(){
	int even =0;
	int odd =0;
	for(int i=1;i<=20;i++){
		if(i%2 ==0){
			even +=i;
		}
		else{
			odd += i;
		}
	}
	cout<< "sum of even numbers:  "<<even<<endl;
	cout<<endl;
	cout<< "sum of odd numbers:  "<<odd<<endl;
	return 0;
}
