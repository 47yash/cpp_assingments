#include<iostream>
#include<string.h>
using namespace std;

void CopyS(char*p){
	char b[100];
	int q=0;
	while(*p>=0){
		b[q] = *p;
		p++;
		q++;
	}
	cout<<"copy of string : "<<endl;
	cout<<b<<endl;
}
int main(){
	char a[100];
	gets(a);
	CopyS(a);
}
