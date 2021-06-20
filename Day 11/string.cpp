#include<iostream>
#include<string>
#include<string.h>
using namespace std;

main()
{
	char s1[10];
	strcpy(s1,"Hello Online Students");
	cout<<"s1: "<<s1<<endl;	
	
	string s2="Welcome mfs";
	cout<<"s2: "<<s2<<endl;
	
	string s3=s1;
	cout<<"s3: "<<s3<<endl;
	
	s3 = s3+"\t how tf are y'all ?";
	cout<<"new s3: "<<s3<<endl;
	
	string s4= s1+s2;  //char+string
	cout<<"s4: "<<s4<<endl;
	
	s2.assign("1901640100302");
	cout<<"new s2: "<<s2<<endl;
	
	s3.append("\tLets get the party started!");
	cout<<"s3: "<<s3<<endl;
	
	s4.insert(2,"302");
	cout<<"s4:"<<s4<<endl;
	
	cout<<"Online index in s3: "<<s3.find("Online")<<endl;
	cout<<"Student in s4: "<<s4.rfind("stu")<<endl;
	
	int x=s3.compare(s4);
	cout<<"x: "<<x<<endl;
	s2.erase();
	cout<<"S2: "<<s2<<endl;
	
	char str[20];
	strcpy(str,s4.c_str());
	cout<<"str: "<<str;
	
	
}
