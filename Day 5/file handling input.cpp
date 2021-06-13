#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	ifstream fin;
	fin.open("myfile.txt");
	char ch;
	fin>>ch;
	while(!fin.eof())
	{
		cout<<ch;
		ch=fin.get();
	}
	fin.close();
	getch();
}
