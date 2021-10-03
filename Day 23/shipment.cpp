#include<bits/stdc++.h>
using namespace std;


int solve(vector<vector<int> > &A, int B) {
    vector<vector<int>> c;
    int n=A.size();
    int sum=0,charge=0;
    for(int i=0;i<n;i++)
    sum+=A[i][0];
    if(sum>=B)
    {
        int c=0,i=0;
        int batches=int(sum/B)+1;
        cout<<"batches"<<batches<<endl;
        while(batches>0)
        {
            int c=0,k=1;
           while(c<=B && i<n)
            {
                c+=A[i][0];
                cout<<"i inside while"<<i<<endl;
                i+=1;
            }
            cout<<c<<i<<endl;
        for(int j=0;j<i-1;j++)
            {
                charge+=A[j][1]*((i-1)+1-k);
                cout<<"charge"<<charge<<endl;
                k+=1;
            }
            //c=0;
            i=i-1;
            batches-=1;
        }
        
        
    }
    else{
        for(int i=0;i<n;i++)
        {
            charge+= A[i][1]*(n+1-i);
            cout<<"charge"<<charge<<endl;
        }
    }
    return charge%(int(pow(10,9))+7);

}


int main()
{
    vector<vector<int>> A={ {2,4}, {1,3}, {3,-3}, {4,1}};
    int B=6;
    int res=solve(A,B);
    cout<<res;
}