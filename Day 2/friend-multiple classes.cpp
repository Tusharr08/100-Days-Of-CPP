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
		friend class B;
};

class B
{
	private:
		int b;
	public:
		void showA(A &x)
		{
			cout<<"A::a "<<x.a;
		}
};

main()
{
	A a(3);
	B b;
	b.showA(a);
}
