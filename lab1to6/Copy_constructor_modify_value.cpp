#include<iostream>
using namespace std;

class date{
	int dd,mm,yy;
	public:
		void show();
		date(int,int,int);
		date( date &);
};

date::date(int d, int m, int y){
	dd=d;
	mm=m;
	yy=y;
}

date::date(date &nd){
	this->dd = nd.dd;
	this->mm = nd.mm;
	this->yy = 2019;
}

void date::show(){
	cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
} 

int main(){
	date d(8,9,2017);
	date d1(d);
	d.show();
	d1.show();

	
	}
