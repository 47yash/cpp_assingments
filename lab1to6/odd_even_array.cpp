#include<iostream>
using namespace std;

int main(){
	int a[5]; 
	int even[5];
	int odd[5];
	int b=0,c=0;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	for(int i=0;i<5;i++){
		if(a[i] %2 ==0){
			even[b] = a[i];
			b++;
		}else{
			odd[c] = a[i];
			c++;
		}
 	}
 		for(int i=0;i<b;i++){
 	  cout<<"even array is "<<even[i]<<endl;
	   }
	   for(int i=0;i<c;i++){
 	  cout<<"odd array is "<<odd[i]<<endl;
	   }
	   
}
