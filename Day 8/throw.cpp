#include<iostream>
#include<conio.h>
using namespace std;

void fun()
{
	throw 10;
}
int main()
{
	int i=1;
	cout<<"welcome";
	try{
		if(i==1)
		throw;
	}
	catch(int e)
	{
		cout<<endl<<"Exception e:"<<e<<endl;
	}
	cout<<"LAst Line";
	getch();
}
