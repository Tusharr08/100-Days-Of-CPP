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
		friend complex operator+(complex,complex);
};

complex operator+(complex X,complex Y)
		{
			complex temp;
			temp.a=X.a+Y.a;
			temp.b=X.b+Y.b;
			return temp;
		}
main()
{
	complex c1,c2,c3;
	c1.setData(3,4);
	c2.setData(5,6);
	c3=c1+c2; //c3=operator+(c1,c2)
	c3.showData();
	getch();
}
