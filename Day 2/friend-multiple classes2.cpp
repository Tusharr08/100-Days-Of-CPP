#include<iostream>
#include<conio.h>
using namespace std;
class B;
class A
{
	private:
		int a;
	public:
		A(int x=0)
		{
			a=x;
		}
		void showB(B&);
};

class B
{
	private:
		int b;
	public:
		B(int y=0)
		{
			b=y;
		}
		friend void A::showB(B& x);
};
void A::showB(B &x)
		{
			cout<<"B::b "<<x.b;
		}
main()
{
	A a;
	B b(3);
	a.showB(b);
}
