#include<iostream>
using namespace std;
#include<string.h>
void leng(char*p){
	int count=0;
	while(*p!=0){
		count++;
		p++;
	}
	cout<<"length is : "<<count<<endl;
}
int main()
{
	char a[10];
	gets(a);
	leng(a);
}
