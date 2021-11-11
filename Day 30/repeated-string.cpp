#include<bits/stdc++.h>
using namespace std;

long repeatedString(string s, long n) {
    long  k= n/s.size() , m=n%s.size();
    long c=count(s.begin(),s.end(),'a') * k;
    
    for(long i=0;i<m;i++)
    if(s[i]=='a')
    c++;


    return c;
    
}

int main()
{
    string ss="aba" , st=ss;
    int n=10;
    long res=repeatedString(ss,n);
    cout<<res;
}