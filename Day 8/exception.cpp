#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	cout<<"welcome";
	try{
		throw 10;
		cout<<"In try";
	}
	catch(int e)
	{
		cout<<endl<<"Exception e:"<<e<<endl;
	}
	cout<<"LAst Line";
	getch();
}
