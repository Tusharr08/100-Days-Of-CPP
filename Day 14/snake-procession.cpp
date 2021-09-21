#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        string newstr;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='.')
            newstr += s[i];
        }
        bool ans=true;
        int l=newstr.length();
        if(l%2!=0)
        ans=false;
        else
        {
            for(int i=0;i<l;i++)
            {
                if(i%2!=0 && newstr[i]=='H')
                {
                   ans=false;
                }
                else if(i%2==0 && newstr[i]=='T')
                ans=false;

            }
            if(ans) cout<<"VALID"<<"\n";
            else cout<<"INVALID"<<"\n";
        }
        
    }
}