#include<bits/stdc++.h>
using namespace std;

/*
Multimap is similar to map with an addition that multiple elements can have same keys.
 Also, it is NOT required that the key value and mapped value pair has to be unique in this case.
  One important thing to note about multimap is that multimap keeps all the keys in sorted order always.
   These properties of multimap makes it very much useful in competitive programming.
*/

int main()
{
    unordered_multimap<int,int> gquiz1;
    gquiz1.insert(pair <int, int> (1, 40));
    gquiz1.insert(pair <int, int> (2, 30));
    gquiz1.insert(pair <int, int> (3, 60));
    gquiz1.insert(pair <int, int> (6, 50));
    gquiz1.insert(pair <int, int> (6, 10));

    unordered_multimap<int,int> :: iterator itr;
    cout<<"gquiz:"<<endl;
    for(itr=gquiz1.begin();itr!=gquiz1.end();itr++)
    {
        cout<<itr->first<<"-->"<<itr->second<<endl;
    }
    gquiz1.insert(pair <int,int> (4,50));

    cout<<"gquiz after inserting :"<<endl;
    for(itr=gquiz1.begin();itr!=gquiz1.end();itr++)
    {
        cout<<itr->first<<"-->"<<itr->second<<endl;
    }
}

