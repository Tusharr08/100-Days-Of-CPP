#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;

    s.insert(12);
    s.insert(10);
    s.insert(2);
    s.insert(10); // duplicate added
    s.insert(90);
    s.insert(85);
    s.insert(45);
    s.insert(12);
    s.insert(70);

    unordered_set<int> :: iterator it;
    for(it=s.begin();it!=s.end();it++)
    cout<<*it<<" ";
    cout<<endl;

    int key=85;
    if(s.find(key)==s.end())
    cout<<"key not found!";
    else
    {
        cout<<key<<"fetched!";
    }
    cout<<endl;
    for(auto x:s)
    cout<<x<<" ";
    
}