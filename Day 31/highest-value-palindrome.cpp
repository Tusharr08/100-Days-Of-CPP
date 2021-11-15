#include<bits/stdc++.h>
using namespace std;

string highestValuePalindrome(string s, int n, int k) {
    
    if(n<=k)
    {
        string res;
        for(int i=1;i<=n;i++)
        res+='9';
        return res;
    }
    int l=0,r=n-1, c=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]==s[n-i-1])
        continue;
        else
        {
            if((s[i]!='9' && s[n-i-1]=='9')|| (s[i]=='9' && s[n-i-1]!='9'))
            c++;
            else if(s[i]!='9' && s[n-i-1]!='9')
            c+=2;
        }
    }
    if(c>k)
    return "-1";

    while(l<r)
    {
        cout<<'-'<<l<<" "<<s[l]<<" "<<r<<" "<<s[r]<<endl;
        if(s[l]=='9' && s[r]=='9')
        {
            l++;
            r--;
            continue;
        }
        else if((s[l]!='9' && s[r]!='9') && k>=2 )
        {
            s[l]=s[r]='9';
            //check[l]=check[r]=1;
            k-=2;
        }
        else if(s[l]=='9')
        {
            if(s[r]!='9' && k>=1)
            {
                s[r]='9';
                //check[r]=1;
                k--;
            }
        }
        else if(s[r]=='9')
        {
            if(s[l]!='9' && k>=1)
            {
                s[l]='9';
               // check[l]=1;
                k--;
            }
        }
        else if(s[l]!=s[r])
        {
            s[l]=s[r]=max(s[l],s[r]);
            k--;
        }
        else if(n%2!=0)
        {
            if(k>0)
            {
                s[n/2]='9';
                k--;
            }
        }
        l++;
        r--;
    }

    return s;
}


int main()
{
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    cout<<"res:"<<highestValuePalindrome(s,n,k)<<endl;
}