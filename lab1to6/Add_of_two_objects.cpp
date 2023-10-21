#include<iostream>
#include<string.h>
using namespace std;

class temp{
	int a;
	public:
		void get();
		temp add(temp &b1){
			temp s3;
			s3.a= this->a + b1.a;
			return s3;
		}
		void display(){
			cout<<"value is "<<a;
		}
};

void temp :: get(){
	cin>>this->a;
}

int main(){
	temp s1, s2;
	s1.get();
	s2.get();
	temp s4 = s1.add(s2);
	s4.display();
}
