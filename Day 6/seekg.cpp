#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	ifstream fin;
	fin.open("myFile.txt");
	cout<<fin.tellg();
	cout<<endl<<(char)fin.get();
	cout<<endl<<(char)fin.get();
	cout<<endl<<fin.tellg();
	fin.seekg(0);
	cout<<endl<<fin.tellg();
	cout<<endl<<(char)fin.get();
	cout<<endl<<fin.tellg();
	fin.seekg(2,ios_base::cur);
	cout<<endl<<fin.tellg();
	fin.seekg(2,ios_base::beg);
	cout<<endl<<fin.tellg();
	fin.seekg(-2,ios_base::end);
	cout<<endl<<fin.tellg();
}
