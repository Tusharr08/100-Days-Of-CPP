#include<iostream>
#include<array>
using namespace std;

main()
{
	array <int,7> arr={10,20,30,40,50,606,88};
	array <int,7> data={11,22,33,44,55,66,77};
	
	cout<<arr.at(5)<<endl;
	cout<<arr.front()<<endl;
	cout<<arr.back()<<endl;
	//cout<<arr.fill(100)<<endl;
	
	for(int i=0;i<7;i++)
	cout<<arr.at(i)<<" ";
	cout<<endl;
	
	arr.swap(data);
	
	cout<<"Size: "<<arr.size()<<endl;
	
	for(int i=0;i<7;i++)
	cout<<data.at(i)<<" ";
	cout<<endl;
	
	for(int j=0;j<7;j++)
	cout<<arr.at(j)<<" ";
}
