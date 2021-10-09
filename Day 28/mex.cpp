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
    int n;
    cin>>n;
    int arr[n];
    for(int &x:arr) cin>>x;
    cout<<mex(arr,n);
}