#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	int a;
	public:
		void f1()
		{
			cout<<"f1"<<endl;
		}
		A()
		{
			cout<<"Cons A"<<endl;
		}
		virtual ~A()
		{	
		cout<<"Vir Decons A"<<endl;
		}
};
class B:public A
{
	int b;
	public:
		void f2()
		{
			cout<<"f2"<<endl;
		}
		B()
		{
			cout<<"Cons B"<<endl;
		}
		virtual ~B()
		{
			cout<<"Virtual Dceons B"<<endl;
		}
};
main()
{
	A *p=new B;
	p->f1();
	//p->f2(); error causing of earling binding before virtual
	p->f2();	
	delete p;
}
