#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;
int main(){
    double A=100.3456;
    string a=to_string(A);
    cout<<a<<endl;
    char* x;
    for(int i=0;i<a.size();i++){
        if(a[i]=='.')
        break;
        x[i]+=a[i];
        cout<<x<<" "<<i<<endl;
    }
    cout<<x<<endl;
    int z=atoi(x);
    cout<<z<<endl;
}
        