#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	int a;
	public:
		A(int k)
		{
			a=k;
			cout<<"a:"<<a<<endl;
		}
		~A()
		{
			cout<<"Decon A";
		}
};
class B:public A
{
	int b;
	public:
		B(int x, int y):A(x) // parent con executed first then child
		{
			b=y;
			cout<<"b:"<<b<<endl;
		}
		~B()
		{
			cout<<"DEcon B"<<endl;
		}
};
main()
{
	B obj(2,3); //child decon executed before parent decon
	
}
