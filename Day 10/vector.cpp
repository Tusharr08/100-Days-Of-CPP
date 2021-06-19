#include<iostream>
#include<vector>
using namespace std;

main()
{
	vector <int> v2;
	vector <string> v{"Tusharr","Gupta"};
	vector <int> v1{10,20,30,40,50};
	vector <char> cv(5,'a');
	vector <int> v3(5,99);
	vector <string> v4(3,"hello");
	
	cout<<"v4---------"<<endl;
	for(int i=0;i<3;i++)
	cout<<v4[i]<<" "; 
	cout<<endl;
	
	cout<<"cv------"<<endl;
	for(int i=0;i<5;i++)
	cout<<cv[i]<<" ";
	cout<<endl;
	
	cout<<"v1--------"<<endl;
	v1.push_back(60);
	for(int i=0;i<v1.size();i++)
	cout<<v1[i]<<" ";
	cout<<"V1 cap: "<<v1.capacity()<<endl;
	//cout<<"v1 size: "<<v1.size<<endl;
	v1.pop_back();
	
	cout<<"v2------"<<endl;
	for(int i=0;i<=9;i++)
	v2.push_back(10*(i+1));
	for(int i=0;i<10;i++)
	cout<<v2[i]<<" ";
	
	cout<<"v2 cap: "<<v2.capacity()<<endl;
	v2.pop_back();
	cout<<"v2 cap: "<<v2.capacity()<<endl;
	v2.pop_back();
	cout<<"v2 cap: "<<v2.capacity()<<endl;
	v2.pop_back();
	cout<<"v2 cap: "<<v2.capacity()<<endl;
	cout<<"v2 size: "<<v2.size()<<endl;
	v2.clear();
	cout<<"v2 cap: "<<v2.capacity()<<endl;
	cout<<"v2 size: "<<v2.size()<<endl;
	
	vector <int>::iterator it=v3.begin();
//	cout<<v3.begin();
	cout<<*it<<endl;
	v3.insert(it,44);
	cout<<*it<<endl;
	v3.insert(it+2,35);
	v3.insert(it+3,56); 
	cout<<"v3------"<<endl;
	cout<<"v3 cap: "<<v3.capacity()<<endl;
	cout<<"v3 size: "<<v3.size()<<endl;
	for(auto it=v3.begin(); it!=v3.end();it++)
	cout<<*it<<endl;
	 
}
