#include<iostream>
using namespace std;

class area
{
	public:
		area_calc(float l,float b)
		{
			return l*b;
			
		}
};

class perimeter
{
	public:
		
			peri(float l,float b)
			{
				return 2*(l+b);
			}
		
};

class rec :private area,perimeter
{
	private:
		float l,b;
		public:
			rec()
			{
				l=0;
				b=0;
			}
			void get()
			{
				cout<<"enter length";
				cin>>l;
				cout<<"enter breadth";
				cin>>b;
			}
			
			float area_calc()
			{
				return area::area_calc((float) l,(float)b);
			}
			
			float peri_calc()
			{
				return perimeter :: peri((float) l,(float)b);
			}
			
			
			
};

	

int main()
{
	rec r1;
	r1.get();
	cout<<r1.area_calc()<<endl;
	cout<<r1.peri_calc();
	
	
	
}
