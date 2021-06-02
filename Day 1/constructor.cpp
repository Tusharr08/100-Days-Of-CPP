#include<iostream>
#include<conio.h>

using namespace std;

class complex {
	private:
		int a,b;
	public:
		complex() //default constructor
		{
		//	a=0;
		//	b=0;
		}
		complex(int k)
		{
			a=k;
		}
		complex(int x , int y) //constructor with two arguments
		{
			a=x;
			b=y;
		}
		complex( complex &c) //copy constructor
		{
			a=c.a;
			b=c.b;
		}
};

main()
{
	//complex c1,c2,c3,c4;
	complex c1(3,4); //or complex c1=complex(3,4)
	complex c2(5); // or complex c2=comlplex(5)
	complex c3;
	complex c4=c1; //or complex c4(c1)
	getch();
}
