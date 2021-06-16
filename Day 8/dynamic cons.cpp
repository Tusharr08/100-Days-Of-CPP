#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	private:
		int a,b,*p;
	public:
		A()
		{
			a=0;
			b=0;
			p=new int;
		}
		A(int x, int y, int z)
		{
			a=x;
			b=y;
			p=new int ;
			*p=z;
		}
		void show()
		{
			cout<<"a:"<<a<<endl<<"b:"<<b<<endl<<"*p:"<<*p<<endl;
		}
};

main()
{
	A o1,o2;
	A o3(3,5,9);
	o2.show();
	o3.show();
}
