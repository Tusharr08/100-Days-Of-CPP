#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	int x;
	public:
		virtual void fun()=0;
		A(int i)
		{
			x=i;
			cout<<"Cons A::x--"<<x<<endl;
		}
};
class B:public A
{
	int y;
	public:
		B(int i, int j):A(i)
		{
			y=j;
			cout<<"COns B::y--"<<y<<endl;
		}
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
	q= new B(2,5);
	B o2(3,4);
	q->fun();
	o2.fun();
//	o2.getX();
	int Y=o2.getY();
	cout<<"Y="<<Y;
}
