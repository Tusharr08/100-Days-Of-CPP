#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int t , n ;
	
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n<3)
	    {
	        cout<<-1<<endl;
	        continue;
	    }
	    long int arr[n];
	    for(int k=0;k<n;k++)
	    cin>>arr[k];
	   
	    long int i=0,j=n-1 ,c=0;
	    while(j<n)
	    {
	        if(arr[i]%3!=0 && arr[j]%3!=0)
	        {
                cout<<arr[i]<<" "<<arr[j]<<endl;
	            arr[i]=arr[j]=n-(n%3);
                c++;
                i++;
                
	        }
	        j--;
	    }
	    cout<<c<<endl;
	    
	    
	}
	return 0;
}
