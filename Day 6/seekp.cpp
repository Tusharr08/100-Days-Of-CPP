#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	ofstream fout;
	fout.open("myFile.txt",ios::app);
	cout<<fout.tellp()<<endl;
	fout<<"ABCDEFG";
	cout<<fout.tellp()<<endl;
	fout.seekp(2,ios_base::beg);
	cout<<fout.tellp()<<endl;
	fout.close();
	getch();
}
