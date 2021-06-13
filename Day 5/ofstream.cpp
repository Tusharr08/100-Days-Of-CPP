#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	ofstream fout;
	fout.open("myfile.txt",ios::out);
	getch();
	fout<<"My name is \nTushar!";
	getch();
	fout.close();
	getch();
}
