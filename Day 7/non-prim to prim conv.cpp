#include<iostream>
#include<conio.h>
using namespace std;

class Complex
{
	int a,b;
	public:
		void setData(int x, int y)
		{
			a=x;
			b=y;
		}
		void showData()
		{
			cout<<"\na "<<a<<endl<<" b "<<b;
		}
		operator int()
		{
			return a;
		}
};

main()
{
	Complex c1;
	c1.setData(3,4);
	c1.showData();
	int x=c1;
	cout<<x;
	getch(); 
}
