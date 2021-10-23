#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map <string,int> m;
    int q,type,val;
    string name;
    cin>>q;
    while(q--)
    {
        cin>>type>>name;
        if(type==1)
        {
            cin>>val;
            m[name]+=val;
        }
        else if(type==2)
        {
            m.erase(name);
        }
        else
        {
            cout<<m[name]<<endl;
        }
    }
    return 0;
}




