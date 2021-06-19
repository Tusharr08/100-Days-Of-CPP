#include<iostream>
#include<utility>
#include<string>
using namespace std;

class Student
{
	private:
		string name;
		int age;
	public:
		void setStudent(string s,int a)
		{
			name=s;
			age=a;
		}
		void showStudent()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}	
};

main()
{
	pair <string,int> p1;
	pair <string,string> p2;
	pair <string , float> p3;
	pair <int,Student> p4;
	
	cout<<"P1--------------"<<endl;
	p1= make_pair("Rahul",16);
	cout<<p1.first<<endl;
	cout<<p1.second<<endl;
	
	cout<<"P2--------------"<<endl;
	p2= make_pair("India","Delhi");
	cout<<p2.first<<endl;
	cout<<p2.second<<endl;
	
	cout<<"P3---------------"<<endl;
	p3=make_pair("Drilling C++",345.5f);
	cout<<p3.first<<endl;
	cout<<p3.second<<endl;
	
	cout<<"P4---------------"<<endl;
	Student s1;
	s1.setStudent("Tusharr",19);
	p4=make_pair(302,s1);
	cout<<p4.first<<endl;
	Student s2= p4.second;
	s2.showStudent();
}
