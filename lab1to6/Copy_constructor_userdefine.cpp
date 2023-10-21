#include<iostream>
using namespace std;
#include<string.h>

class date{
	 char* ptr;
	 int len;
	public:
		void show();
		date(char *);
		date( date &);
};

date::date(char * ch){
	len = strlen(ch);
	ptr = new char[len+1];
	strcpy(ptr,ch);
}

date::date(date &nd){

	this->ptr = new char[this->len+1];
	strcpy(this->ptr, nd.ptr );
}

void date::show(){
	cout<<ptr<<endl;
} 

int main(){
	date d("cdac");
	date d1(d);
	d.show();
	d1.show();
	}
