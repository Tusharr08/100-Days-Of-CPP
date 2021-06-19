#include<iostream>
#include<list>
using namespace std;

main()

{
	list <int> l1{11,22,33};
	list <string> s{"Knp","Lko","Del","Jai"};
	list <string>::iterator r=s.begin();
/*	while(r!=s.end())
	{
		cout<<*r<<endl;
		r++;
	}*/
//	cout<<l1[0];
	cout<<*r<<"size: "<<s.size()<<endl;
	list <int>::iterator p=l1.begin();
	while(p!=l1.end())
	{
		cout<<*p<<endl;
		p++;
	}
	cout<<"L1 size: "<<l1.size()<<endl;
	cout<<"l2-----"<<endl;
	list <int> l2{7,4,8,3,5,9,1,8};
	l2.sort();
	list <int>::iterator q=l2.begin();
	while(q!=l2.end())
	{
		cout<<*q<<" ";
		q++;
	}
	cout<<endl;
	l2.reverse();
	list <int>::iterator t=l2.begin();
	while(t!=l2.end())
	{
		cout<<*t<<"  ";
		t++;
	}
	l2.remove(8);
	cout<<endl;
	list <int>::iterator x=l2.begin();
	while(x!=l2.end())
	{
		cout<<*x<<" ";
		x++;
	}

}
