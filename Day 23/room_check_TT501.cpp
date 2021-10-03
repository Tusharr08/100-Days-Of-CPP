#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool inRange(ll low, ll high, ll x)        
{        
 return (low < x && x < high);         
} 

int main()
{
	ll t,n,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		bool pos=false;
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			v.push_back(make_pair(a,b));
		}
		cout<<"---------"<<endl;
		for(int i=0;i<n;i++)
		cout<<v[i].first<<"-"<<v[i].second<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				
				if(inRange(v[j].first,v[j].second,v[i].first)==0)
				pos=true;
				else
				{
					pos=false;
					break;
				}
			}
		}
		if(pos==false)
		cout<<"Not possible!"<<endl;
		else
		cout<<"POssible!"<<endl;
		
		
	}
}
