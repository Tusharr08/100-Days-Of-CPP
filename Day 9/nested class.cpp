#include<iostream>
#include<conio.h>
#include<string.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"
using namespace std;

class Student
{
	private:
		int rollno;
		char name[20];
		class Address
		{
			private:
				int house;
				char street[20];
				char city[20];
				char state[20];
				char pincode[7];
			
			public:
				void setAdd(int h,char* s, char* c, char* st,char* p)
				{
					house=h;
					strcpy(street,s);
					strcpy(city,c);
					strcpy(state,st);
					strcpy(pincode,p);
				}
				void showAdd()
				{
					cout<<"House No: "<<house<<endl;
					cout<<"Street: "<<street<<endl;
					cout<<"City: "<<city<<endl;
					cout<<"State: "<<state<<endl;
					cout<<"Pincode: "<<pincode<<endl;
				}
		};
	Address add;
	public:
			void setRollno(int r)
			{
				rollno=r;
			}
			void setName(char* n)
			{
				strcpy(name,n);
			}
			void setAdd(int h,char* s, char* c, char* st,char* p)
			{
				add.setAdd(h,s,c,st,p);
			}
			void showStudent()
			{
				cout<<"Rollno: "<<rollno<<endl;
				cout<<"Name: "<<name<<endl;
				add.showAdd();
			}
};

main()
{
	Student s1;
	s1.setRollno(302);
	s1.setName("Tusharr Gupta");
	s1.setAdd(63,"Chawla Chauraha","Kanpur","Uttar Pradesh","208006");
	s1.showStudent();
	getch();
}
