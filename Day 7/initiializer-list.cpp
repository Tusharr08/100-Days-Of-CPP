#include<iostream>
#include<conio.h>
using namespace std;

class Dummy
{
	private:
		int a,b;
		int &y;
		const int x;
		
	public:
		Dummy(int n):x(8),y(n)
		{
			a=5;
			b=6;
		}
		void show()
		{
			cout<<a<<endl<<b<<endl<<x<<endl<<y;
		}
};

main()
{
	int m=6;
	Dummy d1(m);
	d1.show();
}
