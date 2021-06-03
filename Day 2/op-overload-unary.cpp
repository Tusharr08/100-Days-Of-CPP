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
		complex operator-()
		{
			complex temp;
			temp.a=-a;
			temp.b=-b;
			return temp;
		}
};

main()
{
	complex c1,c3;
	c1.setData(3,4);
	c3=-c1; //c3=c1.operator-()
	c3.showData();
	getch();
}
