#include<iostream>
#include<string.h>
using namespace std;

void palin(char* p){
	while(*p !='\0'){
		p++;
	}
	p--;
	char b[100];
	int q=0;
	int z=0;
	while(*p>=0){
		b[q] = *p;
		p--;
		q++;
	}
	int count=0;
	while(p[z] == b[z]){
		z++;
		count++;
	}
	if (p==count)
	{
		printf("Palindrome");
	}
	else{
		printf(" not Palindrome");
	}
}

int main(){
	char a[100];
	gets(a);
	palin(a);
}
