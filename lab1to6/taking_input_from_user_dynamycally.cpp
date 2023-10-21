#include<iostream>
using namespace std;
int main()
{
	int m,n, sum=0;
	float avg;
	cout<<"enter no of subjects\n";
	cin>>m;
	cout<<"no. of chracters\n ";
	cin>>n;
	int *marks_m = new int[m];
	char* name_n = new char[n+1];
	for(int i=0;i<m;i++)
	{
		cout<<"enter each subject marks ";
		cin>>marks_m[i];
		sum=sum+marks_m[i];
		
	}
	avg=(float)sum/m;

cout<<"enter name of student\n"<<endl;
cin>>name_n;
cout<<"name is "<<name_n<<endl;
cout<<"avg is "<<avg<<endl;
delete[] marks_m;
delete[] name_n;

}

