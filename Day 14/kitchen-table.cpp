#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        for(int &x:a) cin>>x;
        for(int &y:b) cin>>y;

        int c=0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(a[i]>=b[i])
                c++;
            }   
            else
            {
                if(abs(a[i]-a[i-1])>=b[i])
                c++;
            }
        }
        cout<<c<<endl;
    }
}