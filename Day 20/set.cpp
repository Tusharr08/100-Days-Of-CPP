#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s1;
    s1.insert(20);
    s1.insert(40);
    s1.insert(40);
    s1.insert(34);
    s1.insert(98);
    s1.insert(15);
    s1.insert(34);
    s1.insert(89);

    set<int> :: iterator itr;
    //cout<<s1.end()<<endl;
    for(itr=s1.begin();itr!=s1.end();itr++)
    cout<<*itr<<" ";
    cout<<endl;

    set<int,greater<int>> s2(s1.begin(),s1.end());

    set<int,greater<int>> :: iterator itr2=s2.begin();
    while(itr2!=s2.end())
    {
        cout<<*itr2<<" ";
        itr++;
    }

    //s2.erase()
}