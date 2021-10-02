#include<bits/stdc++.h>
using namespace std;
#define tc ll t sc cin >>t sc while(t--)
#define ff first
#define sc ;
#define ss second
#define pp push_back
#define pp pop_back
#define mp make_pair
#define ll long long
#define radhe ios::sync_with_stdio(false);
#define krishna cin.tie(NULL);

int main()
{
    tc{
        ll n , ans=1;
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        while(ans*2 <= n)
        {
            ans*=2;
        }
        ll a=n - ans + 1;
        if(ans==n)
        {
            cout<<(ans/2)<<endl;
        }
        else
        {
            cout<<max(a,ans/2)<<endl;
        }
        
    }
}