#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int &x:a) cin>>x;

    vector<int> odd,even;

    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        even.push_back(a[i]);
        else
        {
            odd.push_back(a[i]);
        }
    }
    if(odd.size()==0 || even.size()==0)
    cout<<-1<<"\n";
    else
    {
        for(int i=0;i<odd.size();i++)
        cout<<odd[i]<<" ";
        for(int i=0;i<even.size();i++)
        cout<<even[i]<<" ";
        cout<<"\n";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
}