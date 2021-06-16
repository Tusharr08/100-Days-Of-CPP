#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i=2;
	cout<<"welcome";
	try{
		if(i==1)
		throw 1;
		if(i==2)
		throw "hello";
		if(i==3)
		throw 4.5;
	}
	catch(...)
	{
		cout<<endl<<"Exception e:"<<endl;
	}
	cout<<"LAst Line";
	getch();
}
