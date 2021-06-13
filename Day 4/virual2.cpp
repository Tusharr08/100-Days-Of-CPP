#include<iostream>
using namespace std;

class A
{
	public:
		void f1()
		{
			cout<<"A::f1"<<endl;
		}
		virtual void f2()
		{
			cout<<"A::f2"<<endl;
		}
		virtual void f3()
		{
			cout<<"A::f3"<<endl;
		}
		virtual void f4()
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
		void f4(int x)
		{
			cout<<"B::f4--"<<x<<endl;
		}
};
main()
{
	A *p,*r,o1;
	B *q,o2;
	p=&o1;
	cout<<"-------------------p=&o1-------------------"<<endl;
	o2.f1();
	p->f1();  // early binding so class A fucntions are called
	p->f2();
	p->f3();
	p->f4();
//	p->f4(5);
	
	cout<<"-------------------q=&o2-------------------"<<endl;
	q=&o2;
	q->f1();  // early binding so class b fucntions are called
	q->f2();
	q->f3();//class A
//	q->f4();   error 
	q->f4(5);
	
	cout<<"-----------------r=&o2---------------------"<<endl;
	r=&o2;
	r->f1();  // early binding so class A fucntions are called
	r->f2();
	r->f3();
	r->f4();
//	r->f4(5); error
}
