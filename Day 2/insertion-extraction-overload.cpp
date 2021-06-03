#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
	private:
		int a,b;
	public:
		complex(int x=0,int y=0)
		{
			a=x;
			b=y;
		}
		friend ostream& operator<<(ostream &,complex);
		friend istream& operator>>(istream &,complex&);
};

ostream& operator<<(ostream &dout,complex c)
{
	cout<<"\na="<<c.a<<" b= "<<c.b;
	return dout;
}

istream& operator>>(istream &din,complex &c)
{
	cin>>c.a>>c.b;
	return din;
}

main()
{
	complex c1;
	cout<<"Enter a complex number:";
	cin>>c1;
	cout<<"Complex:";
	cout<<c1;
	getch();
}
