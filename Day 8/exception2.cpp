#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i=3;
	cout<<"welcome";
	try{
		if(i==1)
		throw 1;
		if(i==2)
		throw 2;
		if(i==3)
		throw 3;
	}
	catch(int e)
	{
		cout<<endl<<"Exception e:"<<e<<endl;
	}
	cout<<"LAst Line";
	getch();
}
