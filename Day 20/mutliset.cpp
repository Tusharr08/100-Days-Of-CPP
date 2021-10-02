#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> s;

    s.insert(12);
    s.insert(10);
    s.insert(2);
    s.insert(10); // duplicate added
    s.insert(90);
    s.insert(85);
    s.insert(45);

    multiset<int> :: iterator it,it2,it3;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    it2=s.find(10);
    it3=s.find(85);
    s.erase(it2,it3);


    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

}