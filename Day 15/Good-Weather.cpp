#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int arr[7];
	    for(int &x:arr) cin>>x;
	    int c1=0,c0=0;
	    for(int i=0;i<7;i++)
	    {
	        if(arr[i]==1)
	        c1++;
	        else
	        c0++;
	    }
	    if(c1>c0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
