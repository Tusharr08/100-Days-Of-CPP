#include<iostream>
#include<map>
using namespace std;

main()
{
	map <int,string> customer;
	customer[100]="Bajpai";
	customer[123]="Swastika";
	customer[145]="Shiv";
	customer[171]="Talha";
	customer[200]="Tusharr";

	cout<<customer.at(100)<<endl;
	
	cout<<"Customers: "<<endl;
	map <int,string>::iterator p=customer.begin();
	while(p!= customer.end())
	{
		cout<<p->second<<" ";
		p++;
	}
	
	cout<<endl;
	customer.insert(pair <int,string> (205,"Yashii"));
	cout<<customer.at(205)<<endl;
	cout<<"Cus Size: "<<customer.size()<<endl;
	cout<<"Empty or not"<<customer.empty()<<endl;
	customer.clear();
	//cout<<"Cleared: "<<customer.at(100);
	map <int,string>::iterator q=customer.begin();
	while(q!= customer.end())
	{
		cout<<q->second<<" ";
		q++;
	}
	
}
