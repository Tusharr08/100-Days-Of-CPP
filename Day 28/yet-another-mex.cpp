#include<bits/stdc++.h>
using namespace std;

int mex(int* arr,int n)
{
    set<int> s;
    for(int i=0;i<=n+1;i++)
    s.insert(i);

    set<int> :: iterator i;
    for(i=s.begin();i!=s.end();i++)
    cout<<*i<<" ";

    for(int i=0;i<n;i++)
    {
        s.erase(arr[i]);
    }
    cout<<endl;
    for(i=s.begin();i!=s.end();i++)
    cout<<*i<<" ";
    cout<<endl;
    return *(s.begin());

}

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int arr[n];
        int temp[][]
        for(int &x:arr) cin>>x;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {

            }
        }
    }
}