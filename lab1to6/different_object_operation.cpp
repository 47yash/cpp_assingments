#include<iostream>
#include<string.h>
using namespace std;

class string1{
	int len;
	char* ptr;
	public:
		string1(char*);
		void display();
		string1(char , int);
		string1(int len);
		string1();
};
void string1::display(){
	cout<<"string is "<<ptr<<endl;
	cout<<"length is "<<len<<endl;
}

string1 :: string1(char* ptr1){
	len = strlen(ptr1);
	ptr = new char[len+1];
	strcpy(this->ptr, ptr1);
}

string1::string1(char ch, int len){
	int i;
	this->len=len;
	ptr = new char[this->len+1];
	for(i=0;i<this->len; i++){
		ptr[i] = ch;
		cout<<ptr[i];
	}
	ptr[i] = '\0';
	
}

string1 :: string1(int len){
	this->len=len;
	ptr = new char[this->len+1];
	char ch[this->len+1];
	cout<<endl<<"enter string\n";
	cin>>ch;
	strcpy(ptr,ch);
}

string1::string1(){
	int len;
	cout<<"enter length"<<endl;
	cin>>len;
	this->len = len;
	char ptr1[len+1];
	ptr= new char[this->len+1];
	cout<<"enter string"<<endl;
	cin>>ptr1;
	strcpy(this->ptr, ptr1);
}

int main(){
	string1 s1("cdac");
	s1.display();
	string1 s2('*',50);
	string1 s3(5);
	s3.display();
	string1 s4;
	s4.display();
}
