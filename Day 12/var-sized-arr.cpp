#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,i,j,k;
    cin>>n>>q;
    vector <vector<int>> a(n);
    

    for(i=0;i<n;i++)
    {
        int k;
        cin>>k;

        a[i].resize(k);
        for(int j=0;j<k;j++)
        {
            cin>>a[i][j];
        }
    }   

    for(j=0;j<k;j++)
    {
        int i,j;
        cin>>i>>j;
        cout<<a[i][j]<<endl;
    }

    return 0;
}