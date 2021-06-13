#include<iostream>
using namespace std;

class A
{
	public:
		void f1()
		{
			cout<<"A::f1"<<endl;
		}
		void f2()
		{
			cout<<"A::f2"<<endl;
		}
		void f3()
		{
			cout<<"A::f3"<<endl;
		}
		void f4()
		{
			cout<<"A::f4"<<endl;
		}
};
class B:public A
{
	public:
		void f1()
		{
			cout<<"B::f1"<<endl;
		}
		void f2()
		{
			cout<<"B::f2"<<endl;
		}
		void f4()
		{
			cout<<"B::f4"<<endl;
		}
};
main()
{
	A *p,o1;
	B *q,o2;
	p=&o2;
	o2.f1();
	p->f1();  // early binding so class A fucntions are called
	p->f2();
	p->f3();
	p->f4();
}
