#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int cnt =0;
    for(int i=1;i<n;i++) {
        if(s[i-1] != s[i]) {
            cnt++;
        }
    }

    if(cnt<k) {
        cout<<-1<<"\n";
        return;
    }
    else{

        for(int i=n;i>=0;i--)
        {
            if(k%2!=0 && s[i]!=s[0])
            {
                cout<<i+1<<"\n";
                break;
            }
            else if(k%2==0 && s[i]==s[0])
            {
                cout<<i+1<<"\n";
                break;
            }
        }
    }

}
int main()
{
    //fast input and output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int T;
    cin>>T;
    while(T--) {
        solve();
    }
    return 0;
}