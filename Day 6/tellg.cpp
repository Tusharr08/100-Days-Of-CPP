#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	ifstream fin;
	fin.open("myfile.txt");
	int pos;
	char ch;
	pos=fin.tellg();
	cout<<pos;
	fin>>ch;
	pos=fin.tellg();
	cout<<pos;
	fin>>ch;
	pos=fin.tellg();
	cout<<pos;
	fin.close();
	getch();
}
