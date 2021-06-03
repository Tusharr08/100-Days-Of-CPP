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
		void showData()
		{
			cout<<"\na="<<a<<" b= "<<b;
		}
		friend complex operator-(complex);
};
	complex operator-(complex c)
		{
			complex temp;
			temp.a=-c.a;
			temp.b=-c.b;
			return temp;
		}
main()
{
	complex c1,c3;
	c1.setData(3,4);
	c3=-c1; //c3=operator-(c1)
	c3.showData();
	getch();
}
