#include<iostream>
#include<conio.h>
using namespace std;

class Car
{
	public:
		void shiftGear()
		{
			cout<<"Manual gear"<<endl;
		}
		static void showGear()
		{
			cout<<"excalibur";
		}
};
class Supercar:public Car
{
	public:
		void shiftGear()
		{
			cout<<"auto gear"<<endl;
		}
		void showGear(int k)
		{
			cout<<k<<" gears!"<<endl;
		}
};
main()
{
	Supercar obj;
	obj.shiftGear();
	obj.showGear(6);
//	obj.showGear(); error
	Car::showGear();
}


