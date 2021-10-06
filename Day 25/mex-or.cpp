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
    tc
    {
        ll x;
        cin>>x;
        if(x==0)
        cout<<1<<endl;
        else if(x==1)
        cout<<2<<endl;
        else if(x==2)
        cout<<2<<endl;
        else
        {
            ll ans=1;
            while( 2*ans<=x )
            ans*=2;

            if(ans==x)
            cout<<x<<endl;
            else if(x==(2*ans - 1))
            cout<<x+1<<endl;
            else
            {
                cout<<ans<<endl;
            }
            
        }
        
    }
}