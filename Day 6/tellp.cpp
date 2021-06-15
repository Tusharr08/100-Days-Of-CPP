#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	ofstream fout;
	char ch;
	fout.open("myfile.txt",ios::app);
	int pos;
	pos=fout.tellp();
	cout<<pos;
	fout<<"MySirT";
	pos=fout.tellp();
	cout<<pos;
	getch();
}
