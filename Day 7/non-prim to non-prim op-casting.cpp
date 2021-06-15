#include<iostream>
#include<conio.h>
using namespace std;

class item
{
	private:
		int m, n ;
	public:
		void showData()
		{
			cout<<"m: "<<m<<"n: "<<n;
		}
		void setData(int x, int y)
		{
			m=x;
			n=y;
		}
};

class Product
{
	int a,b;
	public:
		void setData(int x, int y)
		{
			a=x;
			b=y;
		}
		void showData()
		{
			cout<<"\na: "<<a<<" b: "<<b<<endl;
		}
		
		operator item()
		{
			item i;
			i.setData(a,b);
			return i;
		}
};

main()
{
	item i1;
	Product p1;
	p1.setData(3,4);
	p1.showData();
	i1=p1;
	i1.showData();
	getch(); 
}
