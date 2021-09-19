#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,k,i,j;
    cin>>n>>q;
    int**  a= new int *[n]();
    for(int i=0;i<n;i++)
    {
        cin>>k;
        int* b=new int[k]();
        for (int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        a[i]=b;
    }

    for(int num=0;num<q;num++)
    {
        int i,j;
        cin>>i>>j;
        cout<<a[i][j]<<endl;
    }

    for(int i=0;i<n;i++)
    {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}
