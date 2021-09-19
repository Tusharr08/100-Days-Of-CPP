#include<iostream>
using namespace std;

int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>=4)
        {
            if(n%4==0)
            cout<<"NO"<<endl;
            else
            {
                x=n%4;
                if(x>=2)
                cout<<"YES"<<endl;
                else
                {
                    cout<<"NO"<<endl;
                }
                
            }
        }
        else{
            if(n>1 && n<=4)
            cout<<"YES"<<endl;
            else
            {
                cout<<"NO";
            }
            
            
        }
    }
}