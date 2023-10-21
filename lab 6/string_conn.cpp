
#include <iostream>
#include<string.h>
using namespace std;

void conn(char* p, char* q){
	int c=0;
	int d=0;
	while(*p != '\0'){
		p++;
	}
	while(*q !='\0'){
		*p = *q;
		p++;
		q++;
	}
	*p = '\0';
}

int main(){
    char a[10];
    gets(a);
    char b[10];
    gets(b);
    conn(a,b);
    cout<<"conncatination : "<<a<<endl;
}
