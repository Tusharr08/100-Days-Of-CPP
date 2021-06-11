#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	private:
		int a;
	public:
		void setValue(int x)
		{
			a=x;
			cout<<"a:"<<a;
		}
};
class B:public A
{
	//private:
	//	int b;
	public:
		void setData(int y)
		{
			setValue(y);
		}
};
main()
{
	B obj;
	obj.setValue(4);
	obj.setData(5);
	getch();
}
