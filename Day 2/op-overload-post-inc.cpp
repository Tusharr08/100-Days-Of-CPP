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
		complex operator++(int)
		{
			complex temp;
			temp.a=a++;// first a=3 is stored in temp.a then a is incremented to 4
			temp.b=b++;
			return temp;
		}
};

main()
{
	complex c1,c3;
	c1.setData(3,4);
	c1.showData();
	c3=c1++; //c3=c1.operator(c2)
	c1.showData();
	c3.showData();
	getch();
}
