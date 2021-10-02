#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v{10,23,54,23,56,8};
	sort(v.begin(),v.end());
	for(auto x: v)
	cout<<x<<" ";
	sort(v.begin(),v.end(),greater<int>());
	cout<<endl;
	for(auto x:v)
	cout<<x<<" ";
	return 0;
}
