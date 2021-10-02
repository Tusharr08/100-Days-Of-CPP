#include<bits/stdc++.h>
using namespace std;

void showpq(priority_queue<int , vector<int>, greater<int>> gq)
{
    priority_queue<int , vector<int> , greater<int>> g=gq;
    while(!g.empty())
    {
        cout<<'\t'<<g.top();
        g.pop();
    }
    cout<<'\n';
}

int main()
{
    priority_queue<int, vector<int>,greater<int>> gquiz;
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(80);
    gquiz.push(5);
    gquiz.push(2);

    cout<<"Priorityy Queue is:";
    showpq(gquiz);

    cout<<"size:"<<gquiz.size()<<endl;
    cout<<"top:"<<gquiz.top()<<endl;
    cout<<"pop:";
    gquiz.pop();
    showpq(gquiz);

    return 0;

}