#include<iostream>
#include<conio.h>
using namespace std;

class Dummy
{
	private:
		int a,b;
		int *p;
	public:
		void setData(int x ,int y,int z)
		{
			a=x;
			b=y;
			*p=z;
		}
		Dummy()
		{
			p=new int;
		}
		Dummy(Dummy& d) //copy constructor
		{
			a=d.a;
			b=d.b;
			p=new int;
			*p=*(d.p);
		}
		void showData()
		{
			cout<<"\n"<<a<<endl<<b<<endl<<*p;
		}
		~Dummy()
		{
			delete p;
		}
};

main()
{
	Dummy d1;
	d1.setData(3,4,5);
	d1.showData();
	Dummy d2=d1;
	d2.showData();
	getch();
}

