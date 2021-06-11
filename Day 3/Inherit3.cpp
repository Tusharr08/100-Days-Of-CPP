#include<iostream>
#include<conio.h>
using namespace std;

class Array
{
	private:
		int a[10];
	public:
	void insert(int index , int value)
	{
		a[index]=value;
		}	
	void show()
	{
		for(int i=0;i<10;i++)
		cout<<a[i]<<endl;
	}
};
class STACK:public Array
{
	int top;
	public:
		void push(int value)
		{
			insert(top++,value);
		}
};
main()
{
	STACK s1;
	s1.push(34);
	s1.insert(2,56);
	s1.show();
	getch();
}
