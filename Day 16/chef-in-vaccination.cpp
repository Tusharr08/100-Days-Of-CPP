    #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,p,x,y;
	cin>>t;
	int sum;
	while(t--)
	{
	    cin>>n>>p>>x>>y;
	    int a[n];
	    for(int &x:a) cin>>x;
	    for(int i=0;i<p;i++)
	    {
	        if(a[i]==1)
	        sum+=y;
	        else
	        sum+=x;
	        //cout<<"i"<<i<<"Sum"<<sum<<endl;
	    }
	    cout<<sum<<endl;
	    sum=0;
	}
	return 0;
}
