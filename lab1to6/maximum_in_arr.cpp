#include<iostream>
using namespace std;

int main(){
	int a[5] ={1,2,9,4,5};
	int max=0;
	for(int i=0;i<5;i++){
		if(max <a[i]){
			max=a[i];
		} 
 	}
 	cout<<max;
}
