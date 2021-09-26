#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m,k;
	cin>>t;
	while(t--)
	{
	    cin>>m>>n>>k;
	    int total=n*k;
	    if(total>=m)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	    
	}
	
	return 0;
}
