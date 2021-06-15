#include<iostream>
#include<conio.h>
using namespace std;

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
		int getA()
		{
			return a;
		}
		int getB()
		{
			return b;
		}
};

class Item
{
	private:
		int m, n ;
	public:
		void showData()
		{
			cout<<"m: "<<m<<"n: "<<n;
		}
		Item() 
		{
		}
		Item(Product p)
		{
			m=p.getA();
			n=p.getB();
		}
};

main()
{
	Item i1;
	Product p1;
	p1.setData(3,4);
	p1.showData();
	i1=p1;
	i1.showData();
	getch(); 
}
