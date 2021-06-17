#include<iostream>
using namespace std;

namespace MS
{
	int a;
	int f1();
	class A
	{
		public:
			void fun();
	};
}

int MS::f1()
{
	cout<<"This be f1()"<<endl;
	cout<<"a: "<<a<<endl;
}
void MS::A::fun(){
	cout<<"Have some fun bitch!"<<endl;
}

using namespace MS;
int main()
{
	a=5;
	f1();	
	A obj;
	obj.fun();
}
