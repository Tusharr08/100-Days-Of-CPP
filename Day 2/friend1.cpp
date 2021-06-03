#include<iostream>
#include<conio.h>

using namespace std;

class complex 
{
	private:
		int a,b;
	public:
		void setData(int x,int y)
		{
			a=x;
			b=y;
		}
		//void showData()
		friend void fun(complex);		
};
void fun(complex c)
{
	cout<<"Sum is "<<c.a+c.b;
}
main()
{
	complex c1;
	c1.setData(3,4);
	fun(c1);
	getch();
}
