#include<iostream>
#include<conio.h>
using namespace std;

class Dummy
{
	private:
		int a,b;
	public:
		void setData(int x ,int y)
		{
			a=x;
			b=y;
		}
		void showData()
		{
			cout<<a<<endl<<b;
		}
		Dummy()
		{
			
		}
		Dummy(Dummy &d) //copy constructor
		{
			a=d.a;
			b=d.b;
		}
};

main()
{
	Dummy d1;
	d1.setData(3,4);
	Dummy d2=d1;
	d2.showData();
	getch();
}
