#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	int x;
	public:
		virtual void fun()=0;
		int getX()
		{
			return x;
		}
};
class B:public A
{
	int y;
	public:
		void fun()
		{
			cout<<"fun called"<<endl;
		}
		int getY()		
		{
			return y;
		}
};
main()
{
	A *q;
	q= new B;
	B o2;
	q->fun();
	o2.fun();
	int X=o2.getX();
	cout<<"X="<<X<<endl;
	int Y=o2.getY();
	cout<<"Y="<<Y;
}
