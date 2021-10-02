#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> order;
    order[5] = 10;
    order[3] = 5;
    order[20] = 100;
    order[1] = 1;

    for(auto i=order.begin();i!=order.end();i++)
    {
        cout<<i->first<<"-->"<<i->second<<endl;
    }

}