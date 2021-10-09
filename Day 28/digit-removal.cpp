#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>d;
		int num=n , ans=0 , rem=0, c=0;
		while(num>0)
		{
			rem=num%10;
			num=num/10;
			c++;
			if(rem==d)
			{
				num=num*int(pow(10,c)) + (rem+1)*(int(pow(10,c-1)));
				ans=num-n;
				c=0;
			}
		}
		cout<<ans<<endl;
	}
}
